#include<iostream>
using namespace std;

class Animal{
	public:
		Animal(){
			cout<<"1) In Animal Class"<<endl<<endl;
		}
};

class Cat:public Animal{
	public:
		Cat(){
			cout<<"2) In Cat Class"<<endl<<endl;
		}
};

int main(){
	cout<<"Creating object of base class..."<<endl<<endl;
	Animal a;
	cout<<"Creating object of sub class..."<<endl<<endl;
	Cat c; // constructor of base will be called first 
}