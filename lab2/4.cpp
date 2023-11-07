#include "iostream"
#include "math.h"
#include "time.h"

using namespace std;

int main(){
    int attempts = 0, points = 0;

    // Инициализурем начальное число для построение случайной последовательности
    srand(time(NULL));

    // Определяем разброс помехи
    int minNoise = 0, maxNoise = 3;

    // Определяем разброс центра мишени
    int minCenter = 0, maxCenter = 20;

    // Инициализируем координаты центра мишени с учётом разброса от minCenter до maxCenter
    int cordCenterX = minCenter + rand() % (maxCenter - minCenter + 1);
    int cordCenterY = minCenter + rand() % (maxCenter - minCenter + 1);

    // Инициализируем радиусы зон мишени
    int radiusCenter = 1, radiusMiddle = 2;
    int cordRadiusCenter = pow(radiusCenter, 2), cordRadiusMiddle = pow(radiusMiddle, 2);

    cout << "Последовательно вводите координаты выстрелов" << endl;

    // Вводим координаты выстрела до тех пор пока не наберём 50 очков
    while (points < 50){
        int x, y;
        cin >> x >> y;
        int cordX = pow(cordCenterX, 2) - pow(x, 2), cordY = pow(cordCenterY, 2) - pow(y, 2);
        int noise = minNoise + rand() % (maxNoise - minNoise + 1);

        // Если мы попали в центральный радиус, то получаем 10 очков
        if (cordX + cordY + noise <= cordRadiusCenter)
        {
            points += 10;
        }
        
        // ЕСли мы попали в средний радиус, то получаем 5 очков
        else if (cordX + cordY + noise <= cordRadiusMiddle)
        {
            points += 5;
        }
        cout << "Вы набрали: " << points << endl;

        // Инкрементируем количество попыток для определения уровня 
        attempts++;
    }

    string hunterRang;
    
    // Определяем уровень стрелка в зависимости от числа попыток
    switch (attempts)
    {
    case 5:
        hunterRang = "Мастер";
        break;
    case 6:
        hunterRang = "Снайпер";
        break;
    case 7:
        hunterRang = "Стрелок";
        break;
    case 8:
        hunterRang = "Меткий";
        break;
    case 9:
        hunterRang = "Просто стрелок";
        break;
    case 10:
        hunterRang = "Новичок";
        break;
    default:
        cout << "К сожалению вы использовали слишком много попыток, попробуйте ещё раз" << endl;
        return 0;
    }

    cout << "Ваш ранг: " << hunterRang << endl;
    return 0;
}