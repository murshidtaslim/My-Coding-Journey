#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
bool findpairdifference(vector<int>&v,int target){
    for(int i=0;i<v.size();){
    	for(int j=1;j<v.size();){
    		if(i!=j&&v[j]-v[i]==target){
    			cout<<"found "<<v[j]<<" "<<v[i]<<endl;
    			return true;
			}else if(v[j]-v[i]<target){
				j++;
			}else{
				i++;
			}
		}
	}
	cout<<"!found"<<endl;
	return false;
}
int main(){
	vector<int>num={23,56,34,78,45};
	sort(num.begin(),num.end());
	int target=44;
	print(num);
	findpairdifference(num,target);
	return 0;
}