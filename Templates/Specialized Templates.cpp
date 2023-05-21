#include<iostream>
using namespace std;

template<class T> // for all other types apart from int
void func(T a){ 
	cout<<"Other Type: "<<a<<endl;
}

template<> // only for int 
void func(int a){
	cout<<"Int: "<<a<<endl;
}

int main(){
	func("Hello");
	func(10);
}