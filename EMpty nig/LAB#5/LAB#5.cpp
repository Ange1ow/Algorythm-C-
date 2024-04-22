#include <iostream>
#include<ctime>
#include<windows.h>
using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				// ќбм≥н елемент≥в м≥сц€ми
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{


	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int n;
	cout << "Enter size array: ";
	cin >> n;

	int* MyArray = new int[n];

	for (int i = 0; i < n; i++)
	{
		MyArray[i] = rand() % 51 - 25;
	}
	for (int i = 0; i < n; i++)
	{
		cout << MyArray[i] << "\t";
	}
	cout << endl;
	bubbleSort(MyArray, n);

	for (int i = 0; i < n; i++)
	{
		cout << MyArray[i] << "\t";
	}
	cout << endl;

	int WhatFind;
	cout << "Enter WhatFind = ";
	cin >> WhatFind;
	bool found = false;
	int x = 0;
	int a = 0;
	int b = n - 1; // зменшуЇмо b на 1, так €к ≥ндексац≥€ починаЇтьс€ з нул€
	if (n <= 20)
	{
		int result = -1;
		int l = 0, r = n - 1;
		while (l <= r)
		{
			int mid = l + (r - l) / 2;
			cout << "Ћ≥вий кордон: " << l << ", ѕравий кордон: " << r << ", —ередина: " << mid << endl;
			// якщо знайдено елемент на середин≥
			if (MyArray[mid] == WhatFind)
			{
				result = mid;
				break;
			}

			// якщо елемент б≥льший, ≥гноруЇмо л≥ву частину
			if (MyArray[mid] < WhatFind)
			{

				l = mid + 1;
			}

			// якщо елемент менший, ≥гноруЇмо праву частину
			else
				r = mid - 1;

			if (result == -1)
			{
				cout << "≈лемент не знайдено";
			}
			else
			{
				cout << "≈лемент знайдено на позиц≥њ " << result;
			}

		}
	}
	else if (n <= 100)
	{
		while (a <= b && WhatFind >= MyArray[a] && WhatFind <= MyArray[b])
		{
			x = a + (((double)(WhatFind - MyArray[a])) * (b - a) / (MyArray[b] - MyArray[a]));
			if (MyArray[x] == WhatFind)
			{
				cout << WhatFind << " found in element " << x << endl;
				found = true;
				break;
			}
			if (MyArray[x] < WhatFind)
				a = x + 1;
			else
				b = x - 1;
		}

		if (!found)
			cout << "Sorry. Not found" << endl;
	}
	delete[] MyArray;
	return 0;
}