#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void calcSum(vector<int>&marks){
	int sum=0;
	 for(int i=0;i<marks.size();i++){
		sum+=marks[i];
}
cout<<"\nTotal Marks: "<<sum<<endl;
}

void calcAve(vector<int>&marks){
	int sum=0;
	 for(int i=0;i<marks.size();i++){
		sum+=marks[i];
}
double ave=double(sum)/double(marks.size());
cout<<"\nAverage/Percantage Marks: "<<ave<<"%"<<endl;
}

int main(){
	vector<int>marks;
	int size;
	cout<<"How Many Subjects: ";
	cin>>size;
	if(size<=0){
		return 0;
	} 
	cout<<"Enter Your Obtained Marks: ";
	for(int i=0;i<size;i++){
		int in_marks;
		cin>>in_marks;
		marks.push_back(in_marks);
	
		//	cout<<marks[i]<<" ";

	}
	cout<<"\nObtained Marks: ";
	sort(marks.begin(),marks.end());
	for(int i=0;i<size;i++){
		//sort[i];
		cout<<marks[i]<<" ";
	}
	/*int sum=0;
	 for(int i=0;i<size;i++){
		sum+=marks[i];
}
	cout<<"\nTotal Marks: "<<sum<<endl;
	double average=double(sum)/size;*/
	calcSum(marks);
	calcAve(marks);
/*int heighest=marks[0];
for(int i=1;i<size;i++){
   if(heighest<marks[i])
	heighest=marks[i];
}
cout<<"Heighest Obtained Marks: "<<heighest<<endl;

int lowest=marks[0];
for(int i=1;i<size;i++){

	if(lowest>marks[i])
	lowest=marks[i];
}
cout<<"Lowest Obtained Marks: "<<lowest<<endl;*/
int heighest=*max_element(marks.begin(),marks.end());
int lowest=*min_element(marks.begin(),marks.end());
cout<<"Heighest Obtained Mark: "<<heighest<<endl;
cout<<"Lowest Obtained Mark: "<<lowest<<endl;
return 0;
}