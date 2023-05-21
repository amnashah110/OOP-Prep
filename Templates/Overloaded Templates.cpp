#include<iostream>
using namespace std;

template<class T>
void print(T a){
	cout<<"Printing with one parameter: "<<a<<endl;
}
template<class T1, class T2>
void print(T1 a, T2 b){
	cout<<"Printing with two parameters: "<<a<<" and "<<b<<endl;
}

int main(){
	print("Hello");
	print("Hello", "Goodbye");
}