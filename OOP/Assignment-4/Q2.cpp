#include <iostream>
using namespace std;
class complex{
    private:
        int real, imag;
    public:
        void getdata(){
            cin >> real >> imag;
        }
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
    void operator++(int){
    real++;
    }
};
int main(){
    complex comp;
    comp.getdata();
    cout << "c = ";
    comp.display();
    comp++;
    cout << "after increment\nc = ";
    comp.display();
}
