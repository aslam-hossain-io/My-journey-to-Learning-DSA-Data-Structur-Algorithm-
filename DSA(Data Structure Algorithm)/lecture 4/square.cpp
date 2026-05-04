#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int num = 1;
    for (int i = 0; i < n; i++) { // Outer loop
        for (int j = 0; j < n; j++) { // Inner loop
            cout << num << " ";
            num = num+1;
        }

        cout << endl;
    }
    cout << "After pattern : " << num << endl; // 10
    return 0;
}