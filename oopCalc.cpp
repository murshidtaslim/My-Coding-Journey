#include<iostream>
#include<string>
#include<cmath>
using namespace std;
enum calculations{
	Addition,
	Substraction,
	Multiplication,
	Division,
	square,
	squareRoot,
	Cube
};
//union funct{
//	double i;
	//double x;
//	double Multiple;
//	double Div;
//};
struct operations{
	//string name;
	calculations calc;
//	funct functions;
double num1;
double num2;
	void Calc(){
		if(calc==Addition){
			cout<<"Addition: "<<endl;
			cout<<"Enter First No: ";
			cin>>num1;
			cout<<"Enter Second No: ";
			cin>>num2;
			cout<<"="<<num1+num2<<endl;
		}
		else if(calc==Substraction){
			cout<<"Substraction: "<<endl;
		cout<<"Enter First No: ";
			cin>>num1;
			cout<<"Enter Second No: ";
			cin>>num2;
			cout<<"="<<num1-num2<<endl;
		}
		else if(calc==Multiplication){
			cout<<"Multiplication: "<<endl;
		cout<<"Enter First No: ";
			cin>>num1;
			cout<<"Enter Second No: ";
			cin>>num2;
			cout<<"="<<num1*num2<<endl;
		}
		 else if(calc==Division){
			cout<<"Division: "<<endl;
			cout<<"Enter First No: ";
			cin>>num1;
			cout<<"Enter Second No: ";
			cin>>num2;
			cout<<"="<<num1/num2<<endl;
		}
		else if(calc==squareRoot){
			cout<<"Square Root: "<<endl;
			cout<<"Enter No: ";
			cin>>num1;
			//cout<<"Enter Second No: ";
		//	cin>>num2;
		//	cout<<"="<<pow(num1)<<endl;
		cout<<"="<<sqrt(num1)<<endl;
		}
		else if(calc==square){
			cout<<"Square: "<<endl;
			cout<<"Enter No: ";
			cin>>num1;
			//cout<<"Enter Second No: ";
		//	cin>>num2;
			cout<<"="<<pow(num1,2)<<endl;
		}
		else if(calc==Cube){
			cout<<"Cube: "<<endl;
			cout<<"Enter No: ";
			cin>>num1;
			//cout<<"Enter Second No: ";
		//	cin>>num2;
			cout<<"="<<pow(num1,3)<<endl;
		}
		cout<<"\n========================\n"<<endl;
	}
};
int main(){
	while(true){
	//vector<operations>Calculate;
operations calc;
int x;
cout<<"1. Addition"<<endl<<"2. Substraction"<<"\n3. Multiplication"<<"\n4. Division"<<"\n5. Square"<<"\n6. Cube"<<"\n7. Square Root"<<"\n0. Exit"<<endl;
cout<<"\nEnter Any No. Of Operations: ";
cin>>x;
     if(x==1) calc.calc=Addition; 
else if(x==2) calc.calc=Substraction; 
else if(x==3) calc.calc=Multiplication; 
else if(x==4) calc.calc=Division; 
else if(x==7) calc.calc=squareRoot;
else if(x==5) calc.calc=square;
else if(x==6) calc.calc=Cube;
else{
//	x==0 || x==6;
	cout<<"Exit()";
	break;
}
calc.Calc();
}
	return 0;
}