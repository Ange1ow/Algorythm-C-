#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int n;
	bool flag = true;
	int count = 0;

	cout << "write 10 numbers into massive: \n";
	for (int i = 0; i < size(arr); i++) {

		cin >> arr[i];
	}

	while (flag = true) {

		cout << "write number which u want to find: \n";
		cin >> n;

		for (int i = 0; i < size(arr); i++) {
			if (n == arr[i]) {
				cout << "this number in position " << i+1 << " at the massive.\n";
				flag = false;
				count++;
				return 0;
				
				
			}
			

		}
		if (count == 0) {
			cout << "massive don't have this number! try again!\n";
		}
	}
	
}