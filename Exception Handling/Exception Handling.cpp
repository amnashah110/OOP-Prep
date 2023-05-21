#include <iostream>
using namespace std;

int main(){
	
	// to test if value thrown (if an integer) is positive
    try{
    	// to test if value is integer or not
    	try{
        	throw 20;
        }
		catch(int n){
            cout<<"Value is an integer"<<endl;
            throw n; 
        }
        catch(...){
        	cout<<"Value is not an integer"<<endl;
		}
	}
  	catch(int n){
  		if(n>0){
  			cout<<"It is a positive integer"<<endl;
		}
    }
}
