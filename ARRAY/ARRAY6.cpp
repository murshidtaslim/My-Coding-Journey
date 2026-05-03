#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Array Size: ";
	cin>>size;
	//int a[size]; Using Variable Beside Any Constant Value Is Bad Habit.
	int a[1000];//Use Constant Value.
	for(int i=0;i<size;i++){//But Use Variable For Consider Array Size Via User Input.
		cin>>a[i];
}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
}
	return 0;
}