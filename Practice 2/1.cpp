#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a superprime number." << endl;
        return 0;
    }

    int count = 0;
    int num = 2;

    while (count < n) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
            
            if (count == n) {
                bool isSuperprime = true;
                if (n <= 1) {
                    isSuperprime = false;
                } else {
                    for (int i = 2; i * i <= n; ++i) {
                        if (n % i == 0) {
                            isSuperprime = false;
                            break;
                        }
                    }
                }
                if (isSuperprime) {
                    cout << n << " is a superprime number." << endl;
                } else {
                    cout << n << " is not a superprime number." << endl;
                }
            }
        }
        num++;
    }

    return 0;
}
