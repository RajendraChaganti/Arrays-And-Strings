/*
Rajendra Chaganti 
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {6, 980, 4, 0, 6543};
    int n = 5;
    int target;
    cout << "Enter number to search: ";
    cin >> target;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            cout << "Number found in the array." << endl;
            return 0;
        }
    }
    cout << "Number not found in the array." << endl;
    return 0;
}
/*
Output :
Enter number to search: 31
Number not found in the array.
Output :
Enter number to search: 980
Number found in the array.
*/
