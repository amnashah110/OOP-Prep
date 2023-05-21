#include<iostream>
using namespace std;

template<class T1, class T2> class tempclass{
	T1 variable1; // we can keep the type of attributes flexible
	T2 variable2;
	public:
		tempclass(T1 a, T2 b){
			variable1=a;
			variable2=b;
		}
		void print(){
			cout<<"Variable 1: "<<variable1<<endl;
			cout<<"Variable 2: "<<variable2<<endl;
		}
};

int main(){
	tempclass<int, string>obj1(10, "hello"); // attributes with type int and string
	tempclass<float, char>obj2(5.5, 'A'); // attributes with type float and char
	obj1.print();
	obj2.print();
}