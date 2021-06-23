// Q05. Check a number prime or not

#include <iostream>
using namespace std;

int main()
{
    int i, a, b=0, test = 0;
    cout << "Enter a number: ";
    cin >> a;
    b=a/2;
    for (i = 2; i <= b; i++) {
        if (a % i == 0) {
            cout<<"not prime";
            test = 1;
            break;
        }
    }
    if (test==0)
        cout<< "It is a Prime Number";
    return 0;
}