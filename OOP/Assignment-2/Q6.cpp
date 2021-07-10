#include<iostream>
using namespace std;
class Time{
    private:
    int hr,min,sec;
    public:
    void Getdata();
    void Showdata();
    void Compute(Time, Time);
};
void Time::Getdata(){
    cout<<"Enter time in hour: ";
    cin>>hr;
    cout<<"Enter time in minute: ";
    cin>>min;
    cout<<"Enter time in second: ";
    cin>>sec;
}
void Time::Compute(Time a, Time b){
    int temp;
    hr=min=sec=0;
    sec=a.sec+b.sec;
    if(sec>60){
        temp=sec/60;
        sec=sec%60;
        min=min+temp;
    }
    min=a.min+b.min+min;
    if(min>60){
        temp=min/60;
        min=min%60;hr=hr+temp;
    }
    hr=a.hr+b.hr+hr;
}
void Time::Showdata(){
    cout<<hr<<" hours "<<min<<" minutes and "<<sec<<" seconds";
}
int main(){
    Time t1,t2,t3;
    cout<<"Enter 1no. time..."<<endl;
    t1.Getdata();
    cout<<"Enter 2no. time..."<<endl;
    t2.Getdata();
    t3.Compute(t1,t2);
    cout<<"Addition of 2 times are->"<<endl;
    t3.Showdata();
    return 0;
}