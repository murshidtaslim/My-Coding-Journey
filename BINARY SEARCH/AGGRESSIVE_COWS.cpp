#include<iostream>
#include<algorithm>
using namespace std;
bool canplace(int arr[],int size,int cow,int mingap){
	int cowplace=1;
	int lastposition=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]-lastposition>=mingap){
			cowplace++;
			lastposition=arr[i];
		}
		if(cowplace==cow){
			return true;
		}
	}
	return false;
}
int main(){
	int stall[]={4,3,5,2,1};
	int size=sizeof(stall)/sizeof(stall[0]);
	int cow=3;
	int result=-1;
	int start=1;
	sort(stall,stall+size);
    int end=stall[size-1]-stall[0];
	while(start<=end){
		int mid=start+(end-start)/2;
		if(canplace(stall,size,cow,mid)==true){
			result=mid;
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	cout<<"stalls ";
    for(int i=0;i<size;i++){
    cout<<stall[i]<<" ";
	}
	cout<<endl<<"NO. OF COWS"<<cow<<endl;
	cout<<"GAP "<<result;
	return 0;
}