//Q08. Check a number Palindrome or not

#include <iostream>
using namespace std;

int main () {
    int n, i = 0, p = 0, q, test;
    cout << "Enter any number: " << endl;
    cin >> n;
    test = n;
    while (n != 0) {
        q = n % 10;
        p =  p * 10 + q;
        n = n / 10;
    }
    if (test == p)
        cout <<"It is a Palindrome.";
    else 
        cout <<"It is NOT a Palindrome.";
    return 0;
}