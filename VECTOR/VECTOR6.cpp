#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &v){
		for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v={10,20,60,38,49,28};
	print(v);
    replace(v.begin(),v.end(),38,30);
	replace(v.begin(),v.end(),49,40);
	replace(v.begin(),v.end(),28,70);
	cout<<"AFTER SORT AND REPLACE"<<endl;
	sort(v.begin(),v.end());
	print(v);
	return 0;
}