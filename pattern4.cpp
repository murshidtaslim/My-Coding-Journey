#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int rows=1; rows<=n; rows++){
		for(int space=1; space<=n; space++){
			if(rows==3 || space==3)
			cout<<"*";	
		else{
			cout<<" ";
		}
		}
	cout<<endl;
	}
	return 0;
}