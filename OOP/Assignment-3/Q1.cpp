#include<iostream>
using namespace std;
class Distance{
	private:
		int feet, inch;
	public:
		void set_distance(){
			cout<<"Enter measurement in feet: ";
			cin>>feet;
			cout<<"Enter measurement in inches: ";
			cin>>inch;
		}
		void get_distance(){
			cout<<"Distance in feet is: "<<feet<<" ft."<<"and inches is: "<<inch<<" in."<<endl;
		}
		void add(Distance d1, Distance d2){
			feet = d1.feet + d2.feet;
			inch = d1.inch + d2.inch;
			feet = feet + (inch / 12);
			inch = inch % 12;
		}
		void sub(Distance d1, Distance d2){
			feet = d1.feet - d2.feet;
			inch = d1.inch - d2.inch;
			feet = feet - (inch / 12);
			inch = inch % 12;
		}
};
int main(){
	Distance d1, d2, d3, d4;
	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d4.sub(d1, d2);
	d3.get_distance();
	d4.get_distance();
	return 0;
}