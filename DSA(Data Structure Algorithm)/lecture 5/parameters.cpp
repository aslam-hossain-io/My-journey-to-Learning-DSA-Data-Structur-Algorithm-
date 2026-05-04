#include <iostream>
using namespace std;

// sum of two number
double sum(double a, double b) { // parameters
    double s = a + b;
    return s;
}

// min of 2 num
int minofTwo(int a, int b) {
    if(a<b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << "min = " << minofTwo(5, 10) << endl; // arguments

return 0;
}