#include <iostream>
using namespace std;

int main() {
    // question 1:
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    // queston 2:
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int n = input.length();
    for (int i = 0; i < n / 2; i++) {
        swap(input[i], input[n - i - 1]);
    }
    cout << "Reversed string: " << input << endl;
    // question 3:
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int vowels = 0, consonants = 0;
    for (char c : input) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    return 0;
}
