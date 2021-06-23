  
// Q09. Swap two numbers without using third variable

#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Before Swap"<<endl;
    cout<< " A was:" << a<<endl << " B was:" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swap"<<endl;
    cout<<" A is:" << a<<endl << " B is:" << b << endl;
    return 0;
}