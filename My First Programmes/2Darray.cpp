#include<iostream>
using namespace std;
int main(){
	int array[4][4]{
/*	{18,68,69,87},
	{59,26,76,78},
	{85,27,51,75},
	{42,80,39,29}*/
	};
	for(int i=0;i<4;i++){
		for(int x=0;x<4;x++){
		cin>>array[i][x];
    }
    }
    for(int i=0;i<4;i++){
		for(int x=0;x<4;x++){
		cout<<array[i][x]<<" ";
}
	cout<<endl;
	}

			int sum=0;
			int sum2=0;
	for(int i=0;i<4;i++){
			   sum+=array[i][i];
		for(int x=0;x<4;x++){
	   sum2+=array[i][x];
	    
		}
}
cout<<"diagonal sum: ";
cout<<sum<<endl;
cout<<"total sum: "<<sum2<<endl;

int heighest=array[0][0];
for(int i=0;i<4;i++){
		for(int x=0;x<4;x++){
	if(heighest<array[x][i]){
		heighest=array[x][i];
	}
}
}
cout<<"Heighest marks: "<<heighest<<endl;
int lowest=array[0][0];
for(int i=0;i<4;i++){
		for(int x=0;x<4;x++){
	if(lowest>array[x][i]){
		lowest=array[x][i];
	}
}
}
cout<<"Lowest marks: "<<lowest<<endl;
	return 0;
}