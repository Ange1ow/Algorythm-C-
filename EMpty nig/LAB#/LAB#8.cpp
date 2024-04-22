#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


size_t KMP(const string& S, size_t begin, const string& pattern, int& count) {
    string lowerS = S;
    string lowerPattern = pattern;
    transform(lowerS.begin(), lowerS.end(), lowerS.begin(), ::tolower);
    transform(lowerPattern.begin(), lowerPattern.end(), lowerPattern.begin(), ::tolower);

    vector<int> pf(lowerPattern.length());

    // Обчислюємо префікс для паттерна
    pf[0] = 0;
    for (size_t k = 0, i = 1; i < lowerPattern.length(); ++i) {
        while (k > 0 && lowerPattern[i] != lowerPattern[k])
            k = pf[k - 1];

        if (lowerPattern[i] == lowerPattern[k])
            k++;

        pf[i] = k;
    }

    // Пошук збігу
    for (size_t k = 0, i = begin; i < lowerS.length(); ++i) {
        while (k > 0 && lowerPattern[k] != lowerS[i])
            k = pf[k - 1];

        // Порівнюємо символи паттерна з символами рядка
        if (lowerPattern[k] == lowerS[i])
            k++;

        // Якщо весь паттерн знайдено у рядку, збільшуємо лічильник та повертаємо індекс збігу
        if (k == lowerPattern.length()) {
            size_t matchIndex = i - lowerPattern.length() + 1;
            if (matchIndex < S.length()) {
                count++;
                return matchIndex;
            }
        }
    }

    return string::npos;
}

int main() {

    string text = "Etiam et ex imperdiet purus viverra gravida. Mauris gravida dignissim magna sit amet malesuada. Maecenas tortor nunc, aliquam ac tortor varius, volutpat efficitur lacus. Praesent turpis mi, vestibulum a nisi sit amet, aliquam faucibus ipsum. Cras rhoncus est mauris, eget sollicitudin arcu eleifend ac. Vivamus tempus tincidunt pharetra. Pellentesque molestie viverra libero nec faucibus. Duis scelerisque eleifend dapibus.";
    string pattern, replacePattern, longWordReplacement;
    cout << "text is: " << text << endl;
    cout << "Enter pattern for searching: ";
    getline(cin, pattern);
    int count = 0;
    size_t index = KMP(text, 0, pattern,count);
    if (index != string::npos) {
        cout << "found was: " << count << endl;
        cout << "Position of founded: " << index << endl;
        
        cout << "Enter word to replace the found word with: ";
        getline(cin, replacePattern);
        // Заміна знайденого слова
        text.replace(index, pattern.length(), replacePattern);

        cout << "Enter word to replace long words (>7 characters) with: ";
        getline(cin, longWordReplacement);
        // Заміна слів, які мають більше 7 символів
        size_t start = 0;
        while ((start = text.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", start)) != string::npos) {
            size_t end = text.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", start);
            if (end == string::npos) {
                end = text.length();
            }
            if (end - start > 7) {
                text.replace(start, end - start, longWordReplacement);
            }
            start = end;
        }

        cout << "Result is: " << text << endl;
    }
    else {
        cout << "Searching not found." << endl;
    }

    return 0;
}
