#include <iostream>
using namespace std;
//creating class
class Employee {
    private:
        string Emp_Name;
        int Id;
    public:
    void getData (int);
    void printData ();
};
//getdata func defination
void Employee :: getData (int iterator) {
    cout << iterator <<"." << endl;
    cout << "Enter Employee Id: ";
    cin >> Id;
    cout << "Enter Employee Name: ";
    cin >> Emp_Name;
}
//printdata func defination
void Employee :: printData () {
    cout << Id << " --> " << Emp_Name << endl;
}

int main () {
    Employee Manager[2], Scientist, Labour[15];

    cout << "----Enter Manager Details----" << endl;
    for (int i = 0; i < 2; i++)
        Manager[i].getData (i+1);

    cout << "----Enter Scientist Details----" << endl;
    Scientist.getData (1);

    cout << "----Enter Labour Details----" << endl;
    for (int i = 0; i < 15; i++) 
        Labour[i].getData (i+1);

    cout << "<---Manager-->" << endl;
    for (int i = 0; i < 2; i++)
        Manager[i].printData ();

    cout << "<---Scientist-->" << endl;
    Scientist.printData ();
    
    cout << "<---Labour-->" << endl;
    for (int i = 0; i < 15; i++)
        Labour[i].printData ();
    return 0;
}