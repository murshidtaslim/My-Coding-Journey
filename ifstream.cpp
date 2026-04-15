#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream x("struct,union and enum");
	string i;
	while(getline(x,i)){
	cout<<i;
	cout<<endl;
}
	x.close();
	return 0;
}