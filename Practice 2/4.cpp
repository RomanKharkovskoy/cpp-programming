#include "iostream"
#include "math.h"
#include "time.h"

using namespace std;

int main(){
    int attempts = 0, points = 0;

    srand(time(NULL));
    int minNoise = 0, maxNoise = 3;
    int minCenter = 0, maxCenter = 20;
    int cordCenterX = minCenter + rand() % (maxCenter - minCenter + 1);
    int cordCenterY = minCenter + rand() % (maxCenter - minCenter + 1);

    int radiusCenter = 1, radiusMiddle = 2;
    int cordRadiusCenter = pow(radiusCenter, 2), cordRadiusMiddle = pow(radiusMiddle, 2);

    cout << "Последовательно вводите координаты выстрелов" << endl;
    while (points < 50){
        int x, y;
        cin >> x >> y;
        int cordX = pow(cordCenterX, 2) - pow(x, 2), cordY = pow(cordCenterY, 2) - pow(y, 2);
        int noise = minNoise + rand() % (maxNoise - minNoise + 1);
        if (cordX + cordY + noise <= cordRadiusCenter){
            points += 10;
        }
        else if (cordX + cordY + noise <= cordRadiusMiddle){
            points += 5;
        }
        cout << "Вы набрали: " << points << endl;
        attempts++;
    }
    string hunterRang;
    
    switch (attempts){
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