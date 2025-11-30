#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int n = word.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word" << endl;
    else
        cout << "Not a Secret Word" << endl;

    return 0;
}
