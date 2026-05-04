#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int i = 1;
    int oddSum = 0;

    while(i<=n){
        if(i%2 != 0) {
            oddSum = oddSum + i;
        }
        i++;
    }
    cout << "Odd Sum = " << oddSum << endl;
return 0;
}