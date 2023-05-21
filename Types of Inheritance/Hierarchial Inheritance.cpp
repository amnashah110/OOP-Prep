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

class Dog:public Animal{
	public:
		Dog(){
			cout<<"2) In Dog Class"<<endl<<endl;
		}
};

int main(){
	cout<<"Creating object of base class..."<<endl<<endl;
	Animal a;
	cout<<"Creating object of sub class Cat..."<<endl<<endl;
	Cat c; // constructor of base will be called first 
	cout<<"Creating object of sub class Dog..."<<endl<<endl;
	Dog d; // constructor of base will be called first 
}