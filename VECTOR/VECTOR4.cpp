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
vector<int>v;
v.push_back(10);
v.push_back(29);
v.push_back(30);
v.push_back(40);
v.push_back(50);

print(v);

v.erase(v.begin()+1);

cout<<"After deleting 2nd index"<<endl;
print(v);
	return 0;
}