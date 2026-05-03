#include<iostream>
using namespace std;
int main(){
	int a[]={5,6,7,8,9};
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
}
     cout<<endl;
     int size=sizeof(a)/sizeof(a[0]);
     cout<<"Size Of ARRAY: "<<size;
	return 0;
}