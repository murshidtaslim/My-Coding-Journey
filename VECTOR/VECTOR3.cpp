#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
		for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v(5,2);
	print(v);
	
	vector<int>v1(5,0);
	print(v1);
	
	vector<int>v2(10,5);
	print(v2);
	return 0;
}