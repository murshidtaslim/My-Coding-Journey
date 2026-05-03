#include<iostream>
#include<algorithm>
using namespace std;
int caneat(int piles[],int size,int h,int v){
	int totaltime=0;
	for(int i=0;i<size;i++){
		totaltime+=piles[i]/v;
	if(totaltime%v!=0){
		totaltime++;
	}
	}
	if(totaltime<=h){
		return true;
	}else{
		return false;
	}
}
int main(){
	int piles[]={3,5,7,11};
	int size=sizeof(piles)/sizeof(piles[0]);
	int h=8;
	int start=1;
	int end=0;
	for(int k=0;k<size;k++){
		if(piles[k]>end){
			end=piles[k];
		}
	}
	int result=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(caneat(piles,size,h,mid)==true){
			result=mid;
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	cout<<h<<endl;
	cout<<result<<endl;
	
	return 0;
}