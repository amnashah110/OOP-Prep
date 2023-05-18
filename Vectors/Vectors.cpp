#include<iostream>
#include<vector>
using namespace std;

int main(){
	// declaring vector without specifying size
	vector<int> V1;
	
	// declaring vector with size
	vector<int> V2(5); // |0|0|0|0|0|
	
	// declaring vector with size and initializing
	vector<int> V3(5, 18); // |18|18|18|18|18|
	
	// NOTE: ALL OF THE ABOVE VECTORS ARE EXPANDABLE
	
	// Considering vector<int> V1...
	
	// adding elements
	V1.push_back(20);
	V1.push_back(10);
	V1.push_back(15); // |20|10|15|
	
	// removing elements
	V1.pop_back(); // |20|10|
	
	// size
	int size = V1.size(); // size=2
	
	// printing elements using int iterator
	for(int i=0; i<V1.size(); i++){
		cout<<V1[i]<<endl;
	}
	
	// printing elements using vector iterator
	vector<int>::iterator Iter;
	for(Iter=V1.begin(); Iter!=V1.end(); Iter++){ // begin() is at index 0 and end() is at index (size+1)
		cout << *Iter; // value in vector will be printed
	}
	
	// checking if empty
	bool isEmpty = V1.empty(); // isEmpty returns true when empty else false
	
	// emptying a vector
	V1.clear();
	
	// resizing
	// suppose V1 = |1|2|3|4|5|6|7|, size = 7
	V1.resize(5);
	// now V1 = |1|2|3|4|5|, size = 5;
	
	// inserting at arbitrary positions
	// suppose V1 = |1|2|3|4|, size = 4
	V1.insert(V.begin(), 20); // |20|1|2|3|4|
	V1.insert(V.begin()+2, 10); // |20|1|10|2|3|4|
	V1.insert(V.end(), 30); // |20|1|10|2|3|4|30|
	
	// erasing between bounds (inclusive)
	// suppose V1 = |1|2|3|4|5|6|7|8|, size 8
	V1.erase(V1.begin()+2) // erases 1 element --> |1|2|4|5|6|7|8|, size 7
	V1.erase(V1.begin()+2, V1.end()-4); // erases between V1[2] and V1[5] inclusive
	// --> |1|2|7|8|, size = 4
	V1.erase(V1.begin(), V1.end()) // erases between V1[0] and V1[5] inclusive (empties)
	
	// storing class objects in a vector
	class Class{
		public:
			Class(){
				cout<<"Constructor";
			}
	};
	int main(){
		vector<Class> V(1); // there should be atleast one element(object) to call constructor
	}
	
	// above code prints "Constructor"
	
	
}