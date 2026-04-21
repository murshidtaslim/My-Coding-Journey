#include<iostream>
using namespace std;
void bubblesort(int array[],int n){
	for(int i=0;i<n-1;i++){
		bool swap=false;
		for(int k=0;k<n-i-1;k++){
			if(array[k]>array[k+1]){
				int temp=array[k];
				array[k]=array[k+1];
				array[k+1]=temp;
				swap=true;
			}
		}
		if(!swap)break;
	}
}
int main(){
	int a[5]={6,4,8,6,9,};
	int n=5;
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
