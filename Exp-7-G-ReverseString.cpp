#include <iostream>
#include <string>
int main() {
    std::string str = "itnagahC ardnejaR";
    // Reverse the string using for loop
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        std::swap(str[i], str[n - i - 1]);}
    // Output the reversed string
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}
/*
Output :
Reversed string: Rajendra Chaganti
*/
