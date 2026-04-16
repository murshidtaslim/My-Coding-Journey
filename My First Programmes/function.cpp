#include<iostream>
using namespace std;

double add(double num1,double num2){
double	add=num1 + num2;
	return add;
}

double sub(double num1,double num2){
double	sub=num1 - num2;
	return sub;
}

double multiple(double num1,double num2){
double	multiple=num1 * num2;
	return multiple;
}

double division(double num1,double num2){
double	division=num1 / num2;
	return division;
}

int main(){
	double i;
	cout<<"ENTER FIRST NO._";
	cin>>i;
	double x;
	cout<<"ENTER SECOND NO._";
	cin>>x;
	cout<<"1.sum"<<endl<<"2.sub"<<endl<<"3.multiple"<<endl<<"4.division"<<endl;
	int k;
	cout<<"ENTER ONE OF FROM GIVEN NO._";
	cin>>k;
	switch(k) {
		case 1:
		if(k==1)
		cout<<"Sum is_"<<add(i,x);
		break;
		case 2:
		if(k==2)
		cout<<"Sub is_"<<sub(i,x);
		break;
	    case 3:
	    if(k==3)
		cout<<"Multiple is_"<<multiple(i,x);
		break;
		case 4:
		if(k==4)
		cout<<"Division is_"<<division(i,x);
		break;
	}
	
	
return 0;
}