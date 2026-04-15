#include<iostream>
#include<string>
using namespace std;
int main(){
	string fullname;
	/*getline(cin,fullname);
	cout<<fullname<<endl;*/
	
	string reversename="";
	cin>>fullname;
	int size=fullname.length();
	cout<<size<<endl;
	for(int i=size-1;i>=0;i--){
		reversename+=fullname[i];
        

}
reversename!=fullname ? cout<<"not Pelindrome"<<endl : cout<<"Pelindrome"<<endl;
	return 0;
}