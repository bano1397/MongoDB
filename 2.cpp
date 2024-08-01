#include <iostream>
using namespace std;

struct Student{
	int rollNo;
	char name[50];
	float m1,m2,m3;
};

int main(){
	Student s[25];
	for(int i=0; i<25; i++){
		cout<<"Enter roll no "<<endl;
		cin>>s[i].rollNo;
		
		cout<<"Enter name "<<endl;
		cin>>s[i].name;
		
		cout<<"Enter Marks "<<endl;
		cin>>s[i].m1>>s[i].m2>>s[i].m3;
	}
	
	cout<<"Students who have failed in more than one subject"<<endl;
	for(int i=0; i<25; i++){
		if((s[i].m1<50 && s[i].m2<50) || (s[i].m2<50 && s[i].m3<50) ||(s[i].m1<50 && s[i].m3<50)){
		cout<<s[i].rollNo<<"  "<<s[i].name<<endl;
		}
	}
	return 0;
}

