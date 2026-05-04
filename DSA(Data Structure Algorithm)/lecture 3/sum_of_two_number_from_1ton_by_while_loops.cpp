#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n) {
        sum += i;
        i++;
        if(i == 5){
            break;
        }
    }
    cout << "sum = " << sum << endl;
return 0;
}