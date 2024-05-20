#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;
/*  TASK 1
void inputArray(int arr[], int size) {
	cout << "Enter " << size << " elements of array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void outputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}
int main() {
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	int* arr = new int[size];
	inputArray(arr, size);
	cout << "\nUnsorted array: ";
	outputArray(arr, size);
	selectionSort(arr, size);
	cout << "\nSorted array: ";
	outputArray(arr, size);
}*/
/* TASK 2
struct Card {
	string suit;

	string value;
};
bool compareCards(const Card& a, const Card& b) {
	vector<string> values = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack",
	"Queen", "King", "Ace" };
	// �������� ������� ������� ����
	auto a_rank = find(values.begin(), values.end(), a.value) - values.begin();
	auto b_rank = find(values.begin(), values.end(), b.value) - values.begin();
	// ���������� �� ���� � ������� - Ace
	bool a_is_ace = a.value == "Ace";
	bool b_is_ace = b.value == "Ace";
	// ��������� ����� ����
	if (a_is_ace && b_is_ace)
		return false; // ���� ������ - Ace, �� ������� �� ���������
	else if (a_is_ace)
		return true; // ���� ���� ����� ����� - Ace, �� ���� �� ���� ������
	else if (b_is_ace)
		return false; // ���� ���� ����� ����� - Ace, �� ���� �� ���� ������
	else
		return a_rank < b_rank; // ������ ��������� ����� ����� ������� values
}
int main() {
	vector<Card> deck;
	vector<string> suits = { "Hearts", "Diamonds", "Clubs", "Spades" };
	vector<string> values = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack",
	"Queen", "King", "Ace" };
	for (const auto& suit : suits) {
		for (const auto& value : values) {
			deck.push_back({ suit, value });
		}
	}
	random_device rd;
	mt19937 g(rd());
	shuffle(deck.begin(), deck.end(), g);
	cout << "Unsorted deck: " << endl;
	for (const auto& card : deck) {
		cout << card.value << " " << card.suit << endl;
	}
	sort(deck.begin(), deck.end(), compareCards);
	cout << "\n----------------------------\n";
	cout << "\nSorted deck:" << endl;
	for (const auto& card : deck) {
		cout << card.value << " " << card.suit << endl;
	}
	return 0;
}*/
/*

struct Card {
string suit;
string value;
};
bool compareSuit(const Card& a, const Card& b) {
return a.suit < b.suit;
}
bool compareValue(const Card& a, const Card& b) {
vector<string> values = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack",
"Queen", "King", "Ace" };
auto a_rank = find(values.begin(), values.end(), a.value) - values.begin();
auto b_rank = find(values.begin(), values.end(), b.value) - values.begin();
return a_rank < b_rank;
}
int main() {
vector<Card> deck;
vector<string> suits = { "Hearts", "Diamonds", "Clubs", "Spades" };
vector<string> values = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack",
"Queen", "King", "Ace" };
for (const auto& suit : suits) {
for (const auto& value : values) {
deck.push_back({ suit, value });
}
}
random_device rd;
mt19937 g(rd());
shuffle(deck.begin(), deck.end(), g);
cout << "Unsorted deck:" << endl;
for (const auto& card : deck) {
cout << card.value << " " << card.suit << endl;
}
// �������� ������� �� �����
sort(deck.begin(), deck.end(), compareSuit);
cout << "\nSorted by suit deck:" << endl;
for (const auto& card : deck) {
cout << card.value << " " << card.suit << endl;
}
// ���� ������� �� ���������
stable_sort(deck.begin(), deck.end(), compareValue);
cout << "\nSorted by suit and value deck:" << endl;
for (const auto& card : deck) {
cout << card.value << " " << card.suit << endl;
}
return 0;
}*/