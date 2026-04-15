#include<iostream>
using namespace std;
int main(){
	int marks[5]{85,97,45,67,93};
	int sum=0;
	for(int i=0; i<5; i++){
		sum+=marks[i];
	}
	cout<<sum<<endl;
	double average=(double)sum/5;
	cout<<average<<endl;
	int target=97;
	for(int i=0; i<5; i++){
		if(marks[i]==target){
	
		cout<<"found"<<i<<endl;
		break;
}
	}
	return 0;
}