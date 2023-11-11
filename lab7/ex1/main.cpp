#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Функция для вывода приглашения и ввода времени от пользователя
void inputTime(Time &t) {
    cout << "Введите время в формате часы, минуты, секунды:\n";
    cout << "Часы: ";
    cin >> t.hours;
    cout << "Минуты: ";
    cin >> t.minutes;
    cout << "Секунды: ";
    cin >> t.seconds;
}

// Функция для вывода времени в секундах
int timeInSeconds(const Time &t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

// Функция для сложения двух временных интервалов
Time addTime(const Time &t1, const Time &t2) {
    Time result;
    result.hours = t1.hours + t2.hours;
    result.minutes = t1.minutes + t2.minutes;
    result.seconds = t1.seconds + t2.seconds;

    // Коррекция, если сумма секунд больше 59
    result.minutes += result.seconds / 60;
    result.seconds %= 60;

    // Коррекция, если сумма минут больше 59
    result.hours += result.minutes / 60;
    result.minutes %= 60;

    // Коррекция, если сумма часов больше 23
    result.hours %= 24;

    return result;
}

// Функция для вычитания двух временных интервалов
Time subtractTime(const Time &t1, const Time &t2) {
    Time result;
    result.hours = t1.hours - t2.hours;
    result.minutes = t1.minutes - t2.minutes;
    result.seconds = t1.seconds - t2.seconds;

    // Коррекция, если разность секунд меньше 0
    if (result.seconds < 0) {
        result.seconds += 60;
        result.minutes--;
    }

    // Коррекция, если разность минут меньше 0
    if (result.minutes < 0) {
        result.minutes += 60;
        result.hours--;
    }

    // Коррекция, если разность часов меньше 0
    if (result.hours < 0) {
        result.hours += 24;
    }

    return result;
}

int main() {
    Time time1, time2;
    
    // Ввод первого времени
    inputTime(time1);

    // Вывод количества секунд в первом времени
    cout << "Количество секунд в первом времени: " << timeInSeconds(time1) << " секунд\n";

    // Ввод второго времени
    inputTime(time2);

    // Вывод количества секунд во втором времени
    cout << "Количество секунд во втором времени: " << timeInSeconds(time2) << " секунд\n";

    // Сложение временных интервалов
    Time sumResult = addTime(time1, time2);
    cout << "Сумма временных интервалов: " << sumResult.hours << " часов, "
              << sumResult.minutes << " минут, " << sumResult.seconds << " секунд\n";

    // Вычитание временных интервалов
    Time diffResult = subtractTime(time1, time2);
    cout << "Разность временных интервалов: " << diffResult.hours << " часов, "
              << diffResult.minutes << " минут, " << diffResult.seconds << " секунд\n";

    return 0;
}
