#include<iostream>
using namespace std;

void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
cout<<endl;
}


void calculatearray(int arr[], int size){
	int sum=0;
	for(int i=0; i<size; i++){
		sum=sum+arr[i];
	}
cout<<"total sum: ";
cout<<sum<<endl;
}

void averagearray(int arr[],int size){
	int sum=0;
		for(int i=0; i<size; i++){
        		sum=sum+arr[i];
}
double average=double(sum)/size;
cout<<"total percentage/average: "<<average<<"%"<<endl;
}

int main(){
int marks[100];
int size;//sizeof(marks)/sizeof(marks[0]);
cout<<"Enter your data size: ";
cin>>size;
for(int x=0;x<size;x++){
	cout<<"Enter your data: ";
	cin>>marks[x];
}
for(int x=0;x<size;x++){
    //cout<<marks[x]<<" ";
}
calculatearray(marks,size);
cout<<"your data: ";
printarray(marks,size);
averagearray(marks,size);
	return 0;
}