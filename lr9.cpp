#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s = "I want to  home";

    istringstream iss(s);
    string word;
    string longest;
    int count = 0;

    while (iss >> word) {
        count++;
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    string res = ""; 
    string pal = ""; 

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') {
            res = res + c;
        }

        if (c != ' ') {
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }
            pal = pal + c;
        }
    }

    string rev = "";
    for (int i = pal.length() - 1; i >= 0; i--) {
        rev = rev + pal[i];
    }

    cout << "Words: " << count << '\n';
    cout << "Longest: " << longest << '\n';
    cout << "No vowels: " << res << '\n';

    if (pal == rev) {
        cout << "Palindrome: Yes" << '\n';
    } else {
        cout << "Palindrome: No" << '\n';
    }

    return 0;
}
