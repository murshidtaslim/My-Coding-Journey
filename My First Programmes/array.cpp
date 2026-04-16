#include<iostream>
using namespace std;
int main(){
	int array []={1,2,3,4,5};
	int length=sizeof(array)/sizeof(array[0]);
for(int index = 0; index<length; index++){
	cout<<index;
}
cout<<endl;

for(int element:array){
	cout<<element;
}
cout<<endl;
int index=0;
while(index<length){
	cout<<array[index];
	index++;

}
cout<<endl;
	return 0;
}