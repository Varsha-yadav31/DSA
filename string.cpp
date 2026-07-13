#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int i = 0;
    int j = str.length() - 1;
    bool pali = true;
    while (i < j) {
        if (str[i] == str[j]) {
            i++;j--;
        } else {
            pali = false;
            break;
        }
    }
    if (pali)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}






















// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(string str, int i, int j) {
//     if (i >= j)
//         return true;

//     if (str[i] != str[j])
//         return false;

//     return isPalindrome(str, i + 1, j - 1);
// }

// int main() {
//     string str;
//     cin >> str;

//     if (isPalindrome(str, 0, str.length() - 1))
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }








