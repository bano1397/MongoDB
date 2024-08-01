#include <iostream>
using namespace std;

int main(){
	string* students[3];
	cout<<"Enter the name of three students: "<<endl;
	
	for(int i=0; i<3; i++){
		string name;
		getline(cin,name);
		students[i]=new string(name);
	}
	
	cout<<"The name of the students are: "<<endl;
	for(int i=0; i<3; i++){
		cout<<*students[i]<<endl;
	}
	
	return 0;
}

