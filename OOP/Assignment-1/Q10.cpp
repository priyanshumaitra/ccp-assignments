// Q10. Convert number in characters (167 - One Six Seven )

#include <iostream>
using namespace std;

int main () {
    int n, i = 0, rem, rev = 0;
    cout << "Enter any Number: " << endl;
    cin >> n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    while (rev != 0) {
        switch (rev % 10) {
            case 0:
                cout << "Zero ";
                break;
            case 1:
                cout << "One ";
                break;
            case 2:
                cout << "Two ";
                break;
            case 3:
                cout << "Three ";
                break;
            case 4: 
                cout << "Four ";
                break;
            case 5:
                cout << "Five ";
                break;
            case 6:
                cout << "Six ";
                break;
            case 7:
                cout << "Seven ";
                break;
            case 8:
                cout << "Eight ";
                break;
            case 9:
                cout << "Nine ";
                break;
            default:
                cout << "Invalid NO." << endl;
        }
        rev /= 10;
    }
    cout << endl;
    return 0;
}