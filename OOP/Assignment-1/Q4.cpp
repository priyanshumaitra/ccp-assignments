// Q04. Print Fibonacci Series

#include <iostream>
using namespace std;

int main () {
    int a = 0, b = 1, c, n,i=1;
    cout << "Enter range: ";
    cin >> n;
    cout << "Fibonacci series: " << a << " " << b << " "; 
    for (i; i <= n-2; i++) {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    cout << endl;
    return 0;
}