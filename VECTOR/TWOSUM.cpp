#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> twosum(vector<int> &v,int target){
	vector<int>result;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]+v[j]==target){
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
}
int main(){
	vector<int>v={23,41,67,45,87};
	int target=86;
	vector<int>ans=twosum(v,target);
	if(ans.size()==2)
	cout<<ans[0]<<" "<<ans[1];
	return 0;
}