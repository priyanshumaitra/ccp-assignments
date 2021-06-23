#include<iostream>
using namespace std;
class Distance {
public:
float foot, inch;
void getInput (){
cout << "Enter measurement in foot: ";
cin >> foot;
cout << "Enter measurement in inch: ";
cin >> inch;
}
void Display (){
cout << "Entered Measure in foot: " << foot << " ft."<< endl;
cout << "Entered Measure in inch: " << inch << " in."<< endl;
}
};
int main (){
Distance ftin;
ftin.getInput ();
ftin.Display ();
return 0;
}