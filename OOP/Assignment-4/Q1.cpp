#include <iostream>
using namespace std;
class test{
public:

  test(){
    cout<<"Constructor called"<<endl;
  }

  ~test(){
    cout<<"Destructor called" <<endl;
   }

   void display(){
     cout<<"test"<<endl;
   }
};
int main(){
   test obj;

   obj.display();
   return 0;
}