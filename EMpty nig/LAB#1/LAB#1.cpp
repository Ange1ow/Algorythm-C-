/*    ******TASK 1******
#include <iostream>
using namespace std;

int main() {

	double arr[3];

	for (int i = 0; i < size(arr); i++) {

		cout << "enter 3 numbers:" << endl;
		cin >> arr[i];

	}

	cout << "numbers,which is allowed:\n";

	for (int i = 0; i < size(arr); i++) {

		if (arr[i] < 7) {
			cout << arr[i]<<endl;
		}

	}
}
*/

/*    ******TASK 2******  
#include <iostream>
using namespace std;

int main() {

	double arr[3];
	double MAX = 0;

	for (int i = 0; i < size(arr); i++) {

		cout << "enter 3 numbers:" << endl;
		cin >> arr[i];

		if (arr[i] > MAX) {
			MAX = arr[i];
		}
	}

	cout << "maximum is: " << MAX << endl;
	return 0;
}
*/

/*    ******TASK 3****** 
#include <iostream>
using namespace std;

int main() {

	double sum = 0;
	int N;
	double number = 1;

	cout << "enter kilkisk: " << endl;
	cin >> N;

	if (N < 0) {
		cout << "its not positive!" << endl;
	}
	else {

		for (int i = 1; i <= N; i++) {
			cout << number << endl;
			sum += number;
			number /= -2;

		}

		cout << "\n the sum is: ";
		cout << sum << endl;

	}
	return 0;
}
*/

/*    ******TASK 4******
#include <iostream>
using namespace std;

int main() {

	int a;
	int b = 2;

	cout << "enter a positive number: \n";
	cin >> a;

	if (a < 0) {
		cout << "its not positive!" << endl;
	}
	else {
		while (a % b != 0) {
			b++;
		}
		cout << "minimized dilnuk" << b << endl;
	}

	return 0;
}
*/

/*    ******TASK 5******
#include <iostream>
using namespace std;

void fibonacci(int n) {
	int a = 0, b = 1, c;

	cout << "Sequence of fibonacci of " << n << " elements is:" <<endl;
	cout << a << " " << b << " ";

	for (int i = 2; i < n; ++i) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	cout << endl;
}

int main() {

	int n;
	cout << "enter kilkist elements: \n";
	cin >> n;
	if (n <= 0) {
		cout << "enter positive number!" << endl;
	}
	else {
		fibonacci(n);
	}
	return 0;
}
*/

/*    ******TASK 6******
#include <iostream>
using namespace std;

int main() {

	srand(time(nullptr));
	int random_num = rand() % 21;
	bool flag = true;
	int count = 1;

	while (flag = true) {

		int q;
		cout << "enter number between 0-20: \n" << endl;
		cin >> q;

		if (q == random_num) {
			cout << "u win! ur tries:" << count << endl;
			flag = false;
			return 0;
		}
		else if (q < random_num && q >= 1 && q <= 20) {
			cout << "Random number more than ur.lets try again!" << endl;
			count++;
		}
		else if (q > random_num && q >= 1 && q <= 20) {
			cout << "Random number less than ur.lets try again!" << endl;
			count++;
		}
		else if (q < 1 || q>20) {
			cout << "u get wrong number! Please enter right number(0-20)!!!" << endl;
		}
	}
}
*/