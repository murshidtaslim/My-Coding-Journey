#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void calcSum(vector<int>&marks){
	int sum=0;
	for(int i=0;i<marks.size();i++){
		sum+=marks[i];
	}
cout<<sum<<endl;

}
void calcAve(vector<int>&marks){
    int sum=0;
	for(int i=0;i<marks.size();i++){
		sum+=marks[i];
	}
	double ave=double(sum)/double(marks.size());
	cout<<ave<<endl;
}
int main(){
	vector<int>marks;
	int n;
	cin>>n;
	int size=n;
	for(int i=0; i<size;i++){
		int in;
		cin>>in;
		marks.push_back(in);
}
//for(int x=0; x<size;x++){
	//	cout<<marks[x];
//}
sort(marks.begin(),marks.end());
for(int i=0;i<size;i++){
	cout<<marks[i]<<" ";
}
int x=*max_element(marks.begin(),marks.end());
cout<<"\n"<<x<<endl;
int i=*min_element(marks.begin(),marks.end());
cout<<i<<endl;
calcSum(marks);
calcAve(marks);
	return 0;
}