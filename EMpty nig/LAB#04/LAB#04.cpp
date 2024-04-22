#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

random_device rd;
mt19937 gen(rd());
int random(int low, int high) {
    uniform_int_distribution<>dist(low, high);
    return dist(gen);
}

int main()
{
    int size, wf, min = INT_MIN;
    bool found = false, srt = true;

    cout << "Enter size of array(from 1 to 100): ";
    cin >> size;

    if (size <= 0 or size > 100) {
        cout << "Not correct size of array" << endl;
        return 0;
    }

    int* arr = new int[size], x = 0, l = 0, r = size - 1;

    for (int i = 0; i < size; i++) {
        arr[i] = random(1, 100);
        if (min <= arr[i] and srt == true) min = arr[i];
        else srt = false;
    }

    if (!srt)
    {
        sort(arr, arr + size);
        cout << "\narray: ";
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << endl << "the element, which you want to find: ";
    cin >> wf;
    cout << endl;

    if (size <= 20) {

        while (l <= r) {
            x = l + (r - l) / 2;

            if (wf == arr[x]) {
                found = true;
                break;
            }

            if (wf > arr[x]) l = x + 1;

            else r = x - 1;
        }

        if (!found) {
            cout << "not to found." << endl;
        }

        else cout << wf << " was found on position " << x + 1 << endl;
    }

    else if (size <= 100) {

        for (; arr[l] < wf and wf < arr[r] and !found;) {
            x = l + ((wf - arr[l]) * (r - l)) / (arr[r] - arr[l]);

            if (arr[x] < wf) l = x + 1;

            else if (arr[x] > wf) r = x - 1;

            else found = true;

        }

        if (arr[l] == wf) cout << wf << " was found on position " << l << endl;

        else if (arr[r] == wf) cout << wf << " was found on position " << r << endl;

        else cout << "not to found." << endl;

    }
    delete[] arr;
    return 0;
}