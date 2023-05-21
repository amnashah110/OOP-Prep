#include<iostream>
using namespace std;

class Vehicle{
	public:
		Vehicle(){
			cout<<"1) In Vehicle Class"<<endl<<endl;
		}
};

class FourWheeler{
	public:
		FourWheeler(){
			cout<<"2) In FourWheeler Class"<<endl<<endl;
		}
};

class Car:public Vehicle, public FourWheeler{
	public:
		Car(){
			cout<<"3) In Car Class"<<endl<<endl;
		}
};

int main(){
	Car c; // constructors of bases classes will be called first
}