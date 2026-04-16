#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
    int sum=0;
	do{
		int num;
		cin>>num;
		sum+=num;
		i--;
	}while(i>0);
		cout<<sum<<endl;
	
	return 0;
}