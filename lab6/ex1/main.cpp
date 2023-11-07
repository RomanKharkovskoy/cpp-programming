#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
    string filename = argv[1];
    ofstream file(filename);

    if (!file.is_open()) {
        cerr << "Не удалось открыть файл для записи." << endl;
        return 1;
    }

    cout << "Введите стихотворение (для завершения ввода введите пустую строку):\n";

    string line;
    while (true) {
        getline(cin, line);

        if (line.empty()) {
            cout << "Ввод завершен. Стихотворение сохранено в файл '" << filename << "'.\n";
            break;
        }

        file << line << endl;
    }

    file.close();

    return 0;
}
