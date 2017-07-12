#include <iostream>
using namespace std;
int main() {
    int num1 = 0;
    int num2 = 1;
    int temp;
    int i;
    int j;
    cout << "enter  how many numbers you want\n";
    cin >> i;
    cout << " 0 1 ";
    for (j = 2; j < i; j++) {
        temp = num1 + num2;
        cout << temp << " ";
        num1 = num2;
        num2 = temp;
    };
    cout << "\n";
    return 0;
}
