#include<iostream>
using namespace std;
int main(){
	int a[5]={5,6};//Gives Extra Three Random/Garbage Value.
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}