#include <iostream>
#include <string>
using namespace std;
/* TASK 1
int main() {
	string text, pattern;
	cout << "Enter the text: ";
	getline(cin, text);
	cout << "Enter the pattern to search for: ";
	getline(cin, pattern);
	size_t found = text.find(pattern);
	if (found != string::npos) {
		cout << "Pattern found at position " << found << endl;
	}
	else {
		cout << "Pattern not found in the text." << endl;
	}
	return 0;
}*/

/* TASK 2
int countWords(const string& text) {
	int wordCount = 0;
	bool inWord = false;
	for (char c : text) {
		if (isspace(c)) {
			if (inWord) {
				inWord = false;
				wordCount++;
			}
		}
		else {
			inWord = true;
		}
	}
	if (inWord) {
		wordCount++;
	}
	return wordCount;
}
int countSentences(const string& text) {
	int sentenceCount = 0;

	for (char c : text) {
		if (c == '.' || c == '!' || c == '?') {
			sentenceCount++;
		}
	}
	return sentenceCount;
}
int main() {
	string text;
	cout << "Enter the text: ";
	getline(cin, text);
	string pattern;
	cout << "Enter the pattern to search for: ";
	getline(cin, pattern);
	transform(pattern.begin(), pattern.end(), pattern.begin(), ::tolower);
	transform(text.begin(), text.end(), text.begin(), ::tolower);
	size_t pos = text.find(pattern);
	int matchCount = 0;
	cout << "Matches found at positions: ";
	while (pos != string::npos) {
		cout << pos << " ";
		pos = text.find(pattern, pos + 1);
		matchCount++;
	}
	cout << endl;
	cout << "Total matches found: " << matchCount << endl;
	cout << "Analysis of the text:" << endl;
	cout << "Number of words: " << countWords(text) << endl;
	cout << "Number of sentences: " << countSentences(text) << endl;
	cout << "Number of characters: " << text.size() << endl;
	return 0;
}*/
/* TASK 3
int countWords(const string& text) {
	int wordCount = 0;
	bool inWord = false;
	for (char c : text) {
		if (isspace(c)) {
			if (inWord) {
				inWord = false;
				wordCount++;
			}
		}
		else {

			inWord = true;
		}
	}
	if (inWord) {
		wordCount++;
	}
	return wordCount;
}
int countSentences(const string& text) {
	int sentenceCount = 0;
	for (char c : text) {
		if (c == '.' || c == '!' || c == '?') {
			sentenceCount++;
		}
	}
	return sentenceCount;
}
int main() {
	string text;
	string pattern;
	char choice;
	bool quit = false;
	while (!quit) {
		cout << "Menu:" << endl;
		cout << "1. Enter text" << endl;
		cout << "2. Enter pattern" << endl;
		cout << "3. Search" << endl;
		cout << "4. Quit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();
		switch (choice) {
		case '1':
			cout << "Enter the text: ";
			getline(cin, text);
			break;
		case '2':
			cout << "Enter the pattern to search for: ";
			getline(cin, pattern);
			break;
		case '3':
			if (text.empty() || pattern.empty()) {
				cout << "Please enter text and pattern first." << endl;
			}
			else {
				transform(pattern.begin(), pattern.end(), pattern.begin(),
					::tolower);
				transform(text.begin(), text.end(), text.begin(), ::tolower);
				size_t pos = text.find(pattern);
				int matchCount = 0;
				cout << "Matches found at positions: ";
				while (pos != string::npos) {
					cout << pos << " ";

					pos = text.find(pattern, pos + 1);

					matchCount++;

				}
				cout << endl;
				cout << "Total matches found: " << matchCount << endl;
				cout << "Analysis of the text:" << endl;
				cout << "Number of words: " << countWords(text) << endl;
				cout << "Number of sentences: " << countSentences(text) << endl;
				cout << "Number of characters: " << text.size() << endl;
			}
			break;
		case '4':
			quit = true;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
	}
	return 0;
}*/