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
void uniqueno(vector<int> &v){
    int ans=0;
    for(int i=0;i<v.size();i++){
    	ans^=v[i];
}
  cout<<ans<<endl;
}
int main(){
	vector<int>v={20,10,12,10,12};
	print(v);
	uniqueno(v);
	return 0;
}