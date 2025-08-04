/*
Rajendra Chaganti
PRN : 24070123150
B3
*/
#include <iostream>
#include <string>
int main() {
    std::string str = "madam";
    // Check if the string is a palindrome
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            std::cout << "The string is not a palindrome." << std::endl;
            return 0; // Exit the program early if it's not a palindrome
    }}
    // If loop completes, the string is a palindrome
    std::cout << "The string is a palindrome." << std::endl;
    return 0;
}
/*
Output :
The string is a palindrome.
*/
