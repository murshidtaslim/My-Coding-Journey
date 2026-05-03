#include<iostream>
using namespace std;
int main(){
	int a[5]={10,6,7,8,9};
	int minimum=a[0];//Also use INT_MAX beside a[0].
	int maximum=a[0];//Also use INT_MIN besid a[0].
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
		if(a[i]<minimum){
		minimum=a[i];
	}
	    if(a[i]>maximum){
	    	maximum=a[i];
		}
}
        cout<<endl;
	    cout<<"MINIMUM: "<<minimum<<endl;
	    cout<<"MAXIMUM: "<<maximum<<endl;
	    /*int maximum=a[0];
		for(int i=0;i<5;i++){
		if(maximum<a[i]){
			maximum=max(maximum,a[i]);
		}
}
	cout<<"MAXIMUM: "<<maximum<<endl;


	int minimum=a[0];
	for(int i=0;i<5;i++){
		if(minimum>a[i]){
			minimum=min(minimum,a[i]);
		}
	}
	cout<<"MINIMUM: "<<minimum<<endl;
*/
	return 0;
}
