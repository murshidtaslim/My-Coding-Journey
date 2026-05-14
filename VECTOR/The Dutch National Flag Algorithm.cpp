#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void sortcolors(vector<int>&v){
	int low=0;
	int mid=0;
	int high=v.size()-1;
	while(mid<=high){
		if(v[mid]==0){
			swap(v[low],v[mid]);
			mid++;
			low++;
		}else if(v[mid]==1){
			mid++;
		}else if(v[mid]==2){
			swap(v[high],v[mid]);
			high--;
		}
	}
}
int main(){
	vector<int>num={0,1,1,0,2,1,0,2,2,1,1,0,1,2};
	print(num);
	sortcolors(num);
	print(num);
	return 0;
}