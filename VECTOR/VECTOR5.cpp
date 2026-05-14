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
	
	cout<<"1st no before sort "<<v.front()<<endl;
	cout<<"Last no before sort "<<v.back()<<endl;
	
	v.erase(v.begin()+4);
	
	sort(v.begin(),v.end());
	print(v);
	cout<<"1st no after sort "<<v.front()<<endl;
	cout<<"Last no after sort "<<v.back()<<endl;
	
	v.clear();
	if(v.empty()==true){
		cout<<"ALL DATA CLEARED";
	}
	return 0;
}