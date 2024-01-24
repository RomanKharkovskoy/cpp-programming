#include <iostream>

// Функция для выставления оценки на основе средней оценки студента
int evaluateGrade(double averageScore) {
    if (averageScore >= 90 && averageScore <= 100) {
        return 4;
    } else if (averageScore >= 80 && averageScore < 90) {
        return 3;
    } else if (averageScore >= 70 && averageScore < 80) {
        return 2;
    } else if (averageScore >= 60 && averageScore < 70) {
        return 1;
    } else if (averageScore < 60) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    double averageScore;

    // Ввод средней оценки студента с клавиатуры
    std::cout << "Введите среднюю оценку студента: ";
    std::cin >> averageScore;

    // Вызов функции для выставления оценки и вывод результата
    int result = evaluateGrade(averageScore);
    std::cout << "Оценка: " << result << std::endl;

    return 0;
}
