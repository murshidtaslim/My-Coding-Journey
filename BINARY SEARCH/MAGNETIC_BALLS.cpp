#include<iostream>
#include<algorithm>
using namespace std;
bool ballposition(int position[],int size,int n,int m){
	int place=1;
	int lastposition=position[0];
	for(int i=1;i<size;i++){
		if(position[i]-lastposition>=m){
			place++;
			lastposition=position[i];
		}
		if(place==n){
			return true;
		}
	}
	return false;
}
int main(){
	int position[]={9,3,5,6,2,1};
	int size=sizeof(position)/sizeof(position[0]);
	int ball=2;
	int result=-1;
	sort(position,position+size);
	int start=1;
	int end=position[size-1]-position[0];
	while(start<=end){
		int mid=start+(end-start)/2;
		if(ballposition(position,size,ball,mid)==true){
			result=mid;
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	cout<<ball<<endl;
	cout<<result<<endl;
	return 0;
}