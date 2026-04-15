#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class calculator{
	public:
		string operation;
		double first_No;
		double second_No;
		double No;
calculator(int x){
//	int x;
//	cin>>x;
	if(x==9 || x==6 || x==7 || x==8 ){
		cout<<"\t\tEnter No. :";
		cin>>No;
		}
		
		else{
	cout<<"\t\tEnter First No. :";
	cin>>first_No;
	cout<<"\t\tEnter Second No. :";
	cin>>second_No;
		}
	switch(x){
		
		case 1: x==1; cout<<"\n\t\tAddition: \n\t\t= "<<first_No+second_No<<endl<<endl; break;
		case 2: x==2; cout<<"\n\t\tSubstraction: \n\t\t= "<<first_No-second_No<<endl<<endl; break;
		case 3: x==3; cout<<"\n\t\tMultiplication: \n\t\t= "<<first_No*second_No<<endl<<endl; break;
		case 4: x==4; cout<<"\n\t\tDivsion: \n\t\t= "<<first_No/second_No<<endl<<endl; break;
		case 5: x==5; cout<<"\n\t\tRemainder: \n\t\t= "<<fmod(first_No,second_No)<<endl<<endl; break;
		case 6: x==6; cout<<"\n\t\tSquare: \n\t\t= "<<pow(No,2)<<endl<<endl; break;
		case 7: x==7; cout<<"\n\t\tSquare Root: \n\t\t= "<<sqrt(No)<<endl<<endl; break;
		case 8: x==8; cout<<"\n\t\tCube: \n\t\t= "<<pow(No,3)<<endl<<endl; break;
		case 9: x==9; cout<<"\n\t\tCube Root: \n\t\t= "<<cbrt(No)<<endl<<endl; break;
		case 10: x==10; 
		cout<<"\n\t\tTotal Outcome"<<endl;
		cout<<"\n\t\tAddition: \n\t\t= "<<first_No+second_No<<endl;
		cout<<"\n\t\tSubstraction: \n\t\t= "<<first_No-second_No<<endl;
		cout<<"\n\t\tMultiplication: \n\t\t= "<<first_No*second_No<<endl;
		cout<<"\n\t\tDivsion: \n\t\t= "<<first_No/second_No<<endl;
		cout<<"\n\t\tRemainder: \n\t\t= "<<fmod(first_No,second_No)<<endl;
	//	cout<<"\n\t\tSquare: \n\t\t= "<<pow(No,2)<<endl;
	//	cout<<"\n\t\tSquare Root: \n\t\t= "<<sqrt(No)<<endl;
	//	cout<<"\n\t\tCube: \n\t\t= "<<pow(No,3)<<endl;
	//	cout<<"\n\t\tCube Root: \n\t\t= "<<cbrt(No)<<endl; break;
	}
}
~calculator(){
};
};

int main(){
	while(true){
	cout<<"\n1. Addition\n2. Substraction\n3. Multiplication\n4. Divsion\n5. Remainder\n6. Square\n7. Square Root\n8. Cube\n9. Cube Root\n10. Total Outcome\n"<<endl;
	int x;
		cout<<"\t\tEnter any one given operations:";
	cin>>x;
	if(x==0){
		break;
	}
	calculator calc(x);
}
return 0;
}
