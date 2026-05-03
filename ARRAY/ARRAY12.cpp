#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,5,3,6,7};
	int second_maximum=arr[0];
	for(int i=0;i<5;i++){
	if(second_maximum<arr[i]){
		second_maximum=arr[i];
	}
	}
	int maxx=arr[0];
	for(int k=0;k<5;k++){
		if(second_maximum!=arr[k]){
			maxx=max(maxx,arr[k]);
	
		}
	}
	cout<<maxx;
	return 0;
}
