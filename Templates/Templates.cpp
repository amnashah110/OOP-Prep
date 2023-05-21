#include<iostream>
using namespace std;

template<class T1, class T2>
void print(T1 a, T2 b, char c){
	cout<<"Type 1: "<<a<<endl;
	cout<<"Type 2: "<<b<<endl;
	cout<<"Normal Parameter: "<<c<<endl;
}

int main(){
	print(10, "Hello", 'A');
}