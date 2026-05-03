#include<iostream>
using namespace std;
int main(){
	int arr[5]={3,5,4,2,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<size;i++){
		int a=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>a){
			arr[j+1]=arr[j];
			j=j-1;
}
		arr[j+1]=a;
}
		for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
	return 0;
}



#include<iostream>
using namespace std;
int main(){
	int arr[5]={6,5,7,4,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size-1;i++){
		int a=i;
		for(int k=i+1;k<size;k++){
			if(arr[k]<arr[a]){
				a=k;
			}
		}
		if(a!=i){
			int temp=arr[i];
			arr[i]=arr[a];
			arr[a]=temp;
		}
	}
		for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int arr[5]={5,2,7,3,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size-1;i++){
		for(int k=0;k<size-i-1;k++){
			if(arr[k]>arr[k+1]){
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
	}
	return 0;
}


#include<iostream>
using namespace std;
void bubblesort(int array[],int n){
	for(int i=0;i<n-1;i++){
		bool swap=false;
		for(int k=0;k<n-i-1;k++){
			if(array[k]>array[k+1]){
				int temp=array[k];
				array[k]=array[k+1];
				array[k+1]=temp;
				swap=true;
			}
		}
		if(!swap)break;
	}
}
int main(){
	int a[5]={6,4,8,6,9,};
	int n=5;
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}


#include<iostream>
using namespace std;
int main(){
	int arr[5]={4,5,3,6,7};
	int second_maximum=arr[0];
	for(int i=0;i<5;i++){
	if(second_maximum<arr[i]){
		second_maximum=arr[i];
	}
	}
	int maxx=arr[0];
	for(int k=0;k<5;k++){
		if(second_maximum!=arr[k]){
			maxx=max(maxx,arr[k]);
	
		}
	}
	cout<<maxx;
	return 0;
}


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


#include<iostream>
using namespace std;
int main(){
	int arr[5]={6,4,7,5,3};
	int x=7;
	for(int i=0;i<5;i++){
		if(x==arr[i]){
			cout<<"Index: "<<i;//Index Finding
	break;
}
}
	return 0;
}

