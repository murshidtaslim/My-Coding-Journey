#include<iostream>
using namespace std;
int main(){
int marks[5]{78,12,88,45,89};
/*for(int i=0; i<5; i++){
	cin>>marks[i];
}
for(int i=0; i<5; i++){
	cout<<marks[i]<<" ";
}*/
int heighest=marks[0];
for(int i=1; i<5; i++){
	if (marks[i]>heighest)
	heighest=marks[i];
	
}
cout<<heighest<<endl;
	return 0;
}