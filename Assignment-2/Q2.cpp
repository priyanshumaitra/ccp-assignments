#include <iostream>
using namespace std;
inline int cube (int n){
return (n * n * n);
}
int main (){
int num;
cout << "Enter number: ";
cin >> num;
cout << "Cube of the entered number is: " << cube (num) << endl;
return 0;
}