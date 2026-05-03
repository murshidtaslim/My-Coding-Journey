#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	if(size==0)
		return 0;
	
	int result[10000];
	cout<<"How Many Subjects ?: ";
	for(int i=0;i<size;i++){
		cin>>result[i];
		 
	}
	     int maximum=result[0];
	     int minimum=result[0];
	     int sum=0;
	for(int i=0;i<size;i++){
		cout<<result[i]<<" ";
	    sum+=result[i];
	   
        if(maximum<result[i]){
	    maximum=result[i];
	}
	    
	    if(result[i]<minimum){
	    minimum=result[i];
	}
	    
	}
	cout<<endl;
	 cout<<"Total: "<<sum<<endl;
	 cout<<"Maximum: "<<maximum<<endl;
	 cout<<"Minimum: "<<minimum<<endl;
	return 0;
}
