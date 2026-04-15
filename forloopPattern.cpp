#include<iostream>
using namespace std;
int main(){
	int rows;

	while(true){
			cin>>rows;
		if(rows==0){
			break;
}
	for(int row=1;row<=rows;row++){
		for(int space=1;space<=rows-row;space++){
			cout<<" ";
		}
		for(int column=1;column<=((2*row)-1);column++){
			cout<<"*";
		}
	cout<<endl;
	}
	for(int _row=rows-1;_row>=1;_row--){
			for(int space=1;space<=rows-_row;space++){
			cout<<" ";
		}
		for(int column=1;column<=((2*_row)-1);column++){
			cout<<"*";
	}
	cout<<endl;
}

}
	return 0;
}