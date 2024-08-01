#include<iostream>
using namespace std;

void revString(char* ptr)
{
	int length = 0;
	while (ptr[length]!='\0'){
		length++;
	}
  for(int i=0; i<length/2; i++){
  	char temp = ptr[i];
  	ptr[i] = ptr[length-i-1];
  	ptr[length-i-1] = temp;
  }
} 

int main(){
	char s[20] = "somestring";
    revString(s); 
    cout<<"Reversed string: "<<s<<endl;
	return 0;
}

