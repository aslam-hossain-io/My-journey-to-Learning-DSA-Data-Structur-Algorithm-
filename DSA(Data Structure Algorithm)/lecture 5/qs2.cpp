#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}



void fun(int x){
    int x = 25;
    cout << "x = " << x << endl;
}

int main() {
    fun()
    cout << x << endl;
return 0;
}