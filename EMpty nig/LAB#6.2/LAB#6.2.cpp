#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    int n;
    cout << "\n\n ¬ведите число до которого нужно сделать массив простых чисел: ";
    cin >> n;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "ѕростые числа до " << n << ":\n";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
