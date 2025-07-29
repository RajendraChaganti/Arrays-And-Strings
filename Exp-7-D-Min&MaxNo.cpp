/*
Rajendra Chaganti
PRN : 24070123150
B3
*/
#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];}
    cout << "Min = " << min << "\n";
    cout << "Max = " << max << "\n";
    return 0;
}
/*
Output :
Enter number of elements: 8
Enter elements:
345
5
4545
43
879
767
7
67
Min = 5
Max = 4545
*/
