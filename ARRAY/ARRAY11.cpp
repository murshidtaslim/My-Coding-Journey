#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,4,3,6,5};
	int j=0,i=4;
	while(j<i){
		swap(arr[j],arr[i]);
		j++;
		i--;
}
    for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";//Swapping Elements
}
	return 0;
}
