#include <iostream>
#include <string>
using namespace std;
/*int pos(char* T, char* W, int n)

{
	int i, j;
	int lenW, lenT;


	for (lenW = 0; W[lenW]; lenW++);
	for (lenT = 0; T[lenT]; lenT++);

	for (i = 0; i <= lenT - lenW; i++)
	{
		for (j = 0; T[i + j] == W[j]; j++);

		if (j - lenW == 1 && i == lenT - lenW && !(n - 1)) return i;
		if (j == lenW)
			if (n - 1) n--;
			else return i;
	}

	return -1;
}*/

/*int main()
{
	char* T = "Hello World Hello World";
	char* W = "lo";


	int i, n = 0;

	for (i = 1; n != -1; i++)
	{
		n = pos(T, W, i);

		if (n >= 0)
			cout << n << endl;
	}
}*/


/*void task3()
{
	string T;
	string W;
	cout << "Enter line: ";
	getline(cin, T);
	cout << "Enter second line: ";
	getline(cin, W);
	bool exit = false;
	while (!exit)
	{
		int i = 0;
		cout << "Menu:\n";
		cout << "1. Enter text\n";
		cout << "2. Enter pattern\n";
		cout << "3. Perform search\n";
		cout << "4. Exit\n";
		cout << "Choose an option: ";

		int option;
		cin >> option;
		cin.ignore();
		switch (option)
		{
		case 1:
		{
			string T1;
			getline(cin, T1);
			T = T + " " + T1;
			break;
		}
		case 2:
		{
			string W1;
			getline(cin, W1);
			W = W + " " + W1;
			break;
		}
		case 3:
		{
			for (i = T.find(W, i++); i != string::npos; i = T.find(W, i + 1))
			{
				cout << i << endl;
			}
			break;
		}
		case 4:
		{
			exit = true;
			break;
		}
		default:
			cout << "Invalid option. Please choose again.\n";
		}
	}


}*/

/*int main()
{
	//1
	string T;
	string W;
	cout << "Enter line: ";
	getline(cin, T);
	cout << "Enter second line: ";
	getline(cin, W);
	int i = 0;
	int k=0;

	for (char& c : T)
	{
		c = tolower(c);
	}
	for (char& c : W)
	{
		c = tolower(c);
	}

	for (i = T.find(W, i++); i != string::npos; i = T.find(W, i + 1))
	{
		k++;
		cout << i << endl;
	}

	//2
	cout << "Amount coincidences: " << k << endl;
	int symbol = T.length();
	int sentence = 1;
	int word = 0;

	for (char& c : T)
	{
		if (c == '?' || c == '.' || c == '!')
		{
			sentence++;
		}
	}

	for (char& c : T)
	{
		if (isspace(c))
		{
			word++;
		}
	}


	cout << "Amount symbol: " << symbol << endl;
	cout << "Amount sentences: " << sentence << endl;
	cout << "Amount words: " << word+1 << endl;


	task3();
}*/