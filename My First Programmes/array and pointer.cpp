#include<iostream>
using namespace std;
int main(){
	int marks[5]={23,34,23,54,34};
	int *ptr=marks;
	for(int i=0;i<5;i++){
		cout<<*ptr<<" ";
		*ptr++;
	}
	return 0;
}