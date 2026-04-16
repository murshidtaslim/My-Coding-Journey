#include<iostream>
using namespace std;
int main(){
	int n, m;
	cin>>n;
	cin>>m;
	for(int i=1; i<=n; i++){
		for(int x=1; x<=m; x++){
			if(i==1 || x==1 || i==n || x==m){
			cout<<"*";
		}
	    else{
		cout<<" ";
	}
}
		cout<<endl;
	}
	
	return 0;
}