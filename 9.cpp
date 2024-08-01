#include <iostream>
using namespace std;

void swapIntegers(int* x,int* y){
	int temp = *x;
	*x=*y;
	*y=temp;
}
int main(){
	int x,y;
	cout<<"Enter 1st no: "<<endl;
	cin>>x;
	cout<<"Enter 2nd no: "<<endl;
	cin>>y;
	
	cout<<"Before Swaping: "<<endl;
	cout<<"First Number: "<<x<<endl;
	cout<<"Second Number: "<<y<<endl;
	
	swapIntegers(&x,&y);
	
	cout<<"After Swaping: "<<endl;
	cout<<"First Number: "<<x<<endl;
	cout<<"Second Number: "<<y<<endl;
	
	return 0;
}

