/*
Rajendra Chaganti
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements (max 50): ";
    cin >> n;
    if (n > 50) {
        cout << "Number too large max is 50.\n";
        return 1;}
    int arr[50];  
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];}
    int average = sum / n;
    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";
    return 0;}
/*
Output :
Enter number of elements (max 50): 7
Enter elements:
34
2344
35
2
98
7
566
Sum = 3086
Average = 440
*/
