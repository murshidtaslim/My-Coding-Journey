#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	vector<string>friends;
	int size;
	cout<<"how many friends: ";
	cin>>size;
	if(size<=0){
		return 0;
	}
	cin.ignore();
	
	for(int i=0;i<size;i++){
		string name;
		getline(cin,name);
		friends.push_back(name);
	}
	sort(friends.begin(),friends.end());
	for(int i=0;i<size;i++){
		cout<<friends[i]<<endl;
	}
return 0;
}