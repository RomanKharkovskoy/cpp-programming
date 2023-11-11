#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void inputTime(Time &t) {
    cout << "Введите время в формате часы, минуты, секунды:\n";
    cout << "Часы: ";
    cin >> t.hours;
    cout << "Минуты: ";
    cin >> t.minutes;
    cout << "Секунды: ";
    cin >> t.seconds;
}

int timeInSeconds(const Time &t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

Time addTime(const Time &t1, const Time &t2) {
    Time result;
    result.hours = t1.hours + t2.hours;
    result.minutes = t1.minutes + t2.minutes;
    result.seconds = t1.seconds + t2.seconds;

    result.minutes += result.seconds / 60;
    result.seconds %= 60;

    result.hours += result.minutes / 60;
    result.minutes %= 60;

    result.hours %= 24;

    return result;
}

Time subtractTime(const Time &t1, const Time &t2) {
    Time result;
    result.hours = t1.hours - t2.hours;
    result.minutes = t1.minutes - t2.minutes;
    result.seconds = t1.seconds - t2.seconds;

    if (result.seconds < 0) {
        result.seconds += 60;
        result.minutes--;
    }

    if (result.minutes < 0) {
        result.minutes += 60;
        result.hours--;
    }

    if (result.hours < 0) {
        result.hours += 24;
    }

    return result;
}

int main() {
    Time time1, time2;

    inputTime(time1);

    cout << "Количество секунд в первом времени: " << timeInSeconds(time1) << " секунд\n";

    inputTime(time2);

    cout << "Количество секунд во втором времени: " << timeInSeconds(time2) << " секунд\n";

    Time sumResult = addTime(time1, time2);
    cout << "Сумма временных интервалов: " << sumResult.hours << " часов, "
              << sumResult.minutes << " минут, " << sumResult.seconds << " секунд\n";

    Time diffResult = subtractTime(time1, time2);
    cout << "Разность временных интервалов: " << diffResult.hours << " часов, "
              << diffResult.minutes << " минут, " << diffResult.seconds << " секунд\n";

    return 0;
}
