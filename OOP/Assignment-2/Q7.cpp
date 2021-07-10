#include<iostream>
using namespace std;
class DCST;
class DME;
class DEE;
class DCST{
    private:
    int data;
    public:
    void getvalue(){
        cout<<"Enter value for DCST: ";
        cin>>data;
    }
    friend int smallest(DCST,DME,DEE);
};
class DME{
    private:
    int data;
    public:
    void getvalue(){
    cout<<"Enter value for DME: ";
    cin>>data;
    }
    friend int smallest(DCST,DME,DEE);
};
class DEE{
    private:
    int data;
    public:
    void getvalue(){
        cout<<"Enter value for DEE: ";cin>>data;
    }
    friend int smallest(DCST,DME,DEE);
};
int smallest(DCST c, DME m, DEE e){
    int temp;
    temp=c.data;
    if(m.data<temp) temp=m.data;
    if(e.data<temp) temp=e.data;
    return temp;
}
int main(){
    DCST c;
    DME m;
    DEE e;
    c.getvalue();
    m.getvalue();
    e.getvalue();
    cout<<"Smallest Marks among the classes: "<<smallest(c,m,e);
    return 0;
}