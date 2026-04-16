#include<iostream>
using namespace std;
int main(){
/*	int i;
	int sum=0;
	cin>>i;
	while(i <= 8){
		cout<<sum<<endl;
		sum+=i;
		i++;
	}*/
	/*int n;
	cin>>n;
	int sum=0;
	for(int i = 1; i<=n; i++){
		sum+=i;
	}
	cout<<sum<<endl;
	*/
/*	for(int i=10; i<=9999;){
		cout<<i;
	}*/
/*	while(true){
		int n;
		cin>>n;
		if(n==-1){
			break;
		}
	}
	*/
	int i;
	cout<<"enter first no."<<endl;
	cin>>i;
	int x;
	cout<<"enter second no."<<endl;
	cin>>x;
	while(true){
		if(i%x==0){
			cout<<"multiple is: "<<i<<endl;
			break;
		}
		i++;
	}
	return 0;
}