#include <iostream>
using namespace std;

void task1()
{
    const int a = 17;

    int m;
    cout << "Enter M = ";
    cin >> m;

    int x[a];
    cout << "Enter an array that contains at least one negative element and zero;";
    for (int i = 0; i < a; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> x[i];
    }

    int y[a];
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        if (abs(x[i]) > m)
        {
            y[k] = x[i];
            k++;
        }
    }

    cout << "M = " << m << endl;

    for (int i = 0; i < a; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        cout << y[i] << " ";
    }
    cout << "\ntask 1 ended." << endl;
}
void task2()
{
    const int a = 17;

    int x[a];
    for (int i = 0; i < a; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> x[i];
    }

    for (int i = 0; i < a; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < a; i++)
    {
        if (x[i] < 0)
        {
            x[i] = -x[i];
        }
    }

    for (int i = 0; i < a; i++)
    {
        cout << x[i] << " ";
    }
    cout << "\ntask 2 ended." << endl;
}
void task3()
{
    int a[] = { 1000,500,200,100,50,20,10,5,2,1 };
    int sum;
    cout << "Enter sum = ";
    cin >> sum;
    for (int i = 0; i < size(a); i++)
    {
        int k = sum / a[i];
        if (k > 0)
        {
            cout << a[i] << " = " << k << endl;
            sum %= a[i];
        }
    }
    cout << "task 3 ended." << endl;
}
void task4()
{
    const int a = 5;
    const int b = 6;
    const int c = a + b;

    int arr1[a] = { 1,-7,2,8,-6 };
    int arr2[b] = { 8,63,1,-7,-21,24 };
    int arr3[c];

    int i = 0, j = 0, k = 0;
    while (i < a && j < b) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < a) {
        arr3[k++] = arr1[i++];
    }
    while (j < b) {
        arr3[k++] = arr2[j++];
    }

    for (i = 0; i < c - 1; ++i) {
        for (j = i + 1; j < c; ++j) {
            if (arr3[i] > arr3[j]) {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << "\ntask 4 ended." << endl;
}

int main()
{
    task1();
    task2();
    task3();
    task4();
}