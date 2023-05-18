#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	file.open("Sample.txt", ios::out); // file creation
	
	// writing to an empty file
	string arr[3];
	arr[0]="first";
	arr[1]="second";
	arr[2]="third";
	for(int i=0; i<3; i++){
		file<<arr[i]<<endl;
	}
	file.close();
	
	// reading from a file
	string read[3];
	string line;
	file.open("Sample.txt", ios::in);
	int j=0;
	while(!file.eof()){
		getline(file, line);
		read[j]=line;
		j++;
	}
	file.close();
	
	// printing
	for(int i=0; i<j-1; i++){
		cout<<i+1<<") "<<read[i]<<endl;
	}
	
	// appending to a file
	file.open("Sample.txt", ios::app);
	file<<"sixth"<<endl<<"fifth";
	file.close();
	
	// printing
	cout<<endl<<"BEFORE UPDATION"<<endl<<endl;	
	file.open("Sample.txt", ios::in);
	j=1;
	while(!file.eof()){
		getline(file, line);
		cout<<j<<") "<<line<<endl;
		j++;
	}
	file.close();
	
	// update file to replace "sixth" with "fourth"
	fstream tempfile;
	tempfile.open("Temp.txt", ios::out);
	file.open("Sample.txt", ios::in);
	while(!file.eof()){
		getline(file, line);
		if(line=="sixth"){
			tempfile<<"fourth"<<endl;
		}else{
			tempfile<<line<<endl;
		}
	}
	file.close();
    tempfile.close();
	
	// printing
	cout<<endl<<"AFTER UPDATION"<<endl<<endl;
	tempfile.open("Temp.txt", ios::in);
	j=1;
	while(!tempfile.eof()){
		getline(tempfile, line);
		if(tempfile.eof()){
			break;
		}
		cout<<j<<") "<<line<<endl;
		j++;
	}
	tempfile.close();
	
	// write to file char by char
	fstream charbychar;
	char array[6]={"hello"};
	char array2[4]={"bye"};
	
	charbychar.open("Sample.txt", ios::out);
	for(int i=0; i<5; i++){
		charbychar.put(array[i]);
	}
	charbychar<<endl;
	for(int i=0; i<3; i++){
		charbychar.put(array2[i]);
	}
    charbychar.close();
	
	// read char by char
	cout<<endl<<"CHAR BY CHAR"<<endl<<endl;
	char ch;
	charbychar.open("Sample.txt", ios::in);
	while(!charbychar.eof()){
		charbychar.get(ch);
		if(charbychar.eof()){
			break;
		}
		cout<<ch;
	}
	charbychar.close();
}