#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(10);
	cout<<"size 1st time "<<v.size()<<endl<<"capacity 1st time "<<v.capacity()<<endl;
	v.push_back(30);
	cout<<"size 2nd time "<<v.size()<<endl<<"capacity 2nd time "<<v.capacity()<<endl;
	v.push_back(50);
	cout<<"size 3rd time "<<v.size()<<endl<<"capacity 3rd time "<<v.capacity()<<endl;
	v.push_back(70);
	cout<<"size 4th time "<<v.size()<<endl<<"capacity 4th time "<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl<<"After pop back"<<endl;
		v.pop_back();
		for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}