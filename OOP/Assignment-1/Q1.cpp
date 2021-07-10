  // Q01. Find the Greatest and Smallest of three Numbers
#include <iostream>
using namespace std;

int main () {
    int n1, n2, n3;
    cout << "Enter three Numbers: " << endl;
    cin >> n1 >> n2 >> n3;

   // largest

     if (n1 > n2 && n1 > n3) 
         cout << "\nGreatest Number is: " <<n1;
     else if  (n2 > n3)
         cout << "\nGreatest Number is: " <<n2;
     else 
         cout << "\nGreatest Number is: " <<n3;
     // smallest
     if (n1 < n2 && n1 < n3) 
         cout << "\nSmallest Number is: " <<n1;
     else if  (n2 < n3)
         cout << "\nSmallest Number is: " <<n2;
     else 
         cout << "\nSmallest Number is: " <<n3;
return 0;
}