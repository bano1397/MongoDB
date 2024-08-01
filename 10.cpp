#include <iostream>
using namespace std;

int sumIntegers(int* x,int* y){
	return *x+*y;
}
int main(){
	int x,y;
	cout<<"Enter 1st no: "<<endl;
	cin>>x;
	cout<<"Enter 2nd no: "<<endl;
	cin>>y;
	
	int Sum = sumIntegers(&x,&y);
	
	cout<<"Sum of two numbers: "<<Sum<<endl;
	
	return 0;
}

