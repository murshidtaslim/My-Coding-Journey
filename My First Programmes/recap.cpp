#include<iostream>
using namespace std;
int main(){
	char box[3][3]={
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'}
	};
	for(int i=0;i<3;i++){
		for(int x=0;x<3;x++){
			cout<<box[i][x]<<" ";
		}
	cout<<endl;
	}
cout<<"------"<<endl;
/*	box[1][1]='x';
		for(int i=0;i<3;i++){
		for(int x=0;x<3;x++){
			cout<<box[i][x]<<" ";
		}
		cout<<endl;
	}*/
	for(int i=1;i<=9;i++){
		char p;
		i%2==0 ? p='0' : p='x';
		
		cout<<i<<endl;
	int choice;
	cout<<"Enter your no: ";
	cin>>choice;
	cout<<"---------"<<endl;
	switch(choice){

case 1: box[0][0]=p;break;
case 2: box[0][1]=p;break;
case 3: box[0][2]=p;break;
case 4: box[1][0]=p;break;
case 5: box[1][1]=p;break;
case 6: box[1][2]=p;break;
case 7: box[2][0]=p;break;
case 8: box[2][1]=p;break;
case 9: box[2][2]=p;break;
}
cout<<"------"<<endl;
		for(int i=0;i<3;i++){
		for(int x=0;x<3;x++){
			cout<<box[i][x]<<" ";
		}
		cout<<endl;
	}
if (
        // Rows (Leti hui)
        (box[0][0] == box[0][1] && box[0][1] == box[0][2]) || 
        (box[1][0] == box[1][1] && box[1][1] == box[1][2]) || 
        (box[2][0] == box[2][1] && box[2][1] == box[2][2]) || 
        
        // Columns (Khadi hui)
        (box[0][0] == box[1][0] && box[1][0] == box[2][0]) || 
        (box[0][1] == box[1][1] && box[1][1] == box[2][1]) || 
        (box[0][2] == box[1][2] && box[1][2] == box[2][2]) || 
        
        // Diagonals (Tirchhi)
        (box[0][0] == box[1][1] && box[1][1] == box[2][2]) || 
        (box[0][2] == box[1][1] && box[1][1] == box[2][0])
    ){
cout<<"winner";
break;
}
}

	return 0;
}
	