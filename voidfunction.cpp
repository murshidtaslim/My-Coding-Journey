#include<iostream>
#include<cmath>
using namespace std;
void add(double num1,double num2){
double	add=num1 + num2;
	cout<<add;
}

void sub(double num1,double num2){
double	sub=num1 - num2;
    cout<<sub;
}

void multiple(double num1,double num2){
double	multiple=num1 * num2;
	cout<<sub;
}

void division(double num1,double num2){
double	division=num1 / num2;
	cout<<division;
}
 

int main(){
	
	cout<<"1. ADDITION"<<endl<<"2. SUBSTRACTION"<<endl<<"3. MULTIPLE"<<endl<<"4. DIVISION"<<endl<<"5. SQUARE"<<endl<<"6. SQUARE ROOT"<<"\n0. EXIT"<<endl<<endl;
	int k;
	while(true){
	cout<<"ENTER NO. FROM GIVEN OPERATIONS 1/2/3/4/5/6/0 : ";
	cin>>k;
	if(k==0){break;}
	switch(k) {
		case 1:
		k==1;
			cout<<"ENTER FIRST NO. ";
	        double i; 
		    cin>>i;
	            cout<<"ENTER SECOND NO. ";
	            double x;
				cin>>x;
		        cout<<"ADDITION is: ";
		        add(i,x);
	          	break;
		case 2:
		k==2;
	       	    cout<<"ENTER FIRST NO. "; 
		        cin>>i;
			    cout<<"ENTER SECOND NO. ";
				cin>>x;
				cout<<"SUBSTRACTION is: ";
		        sub(i,x);
	         	break;
	    case 3:
	    k==3;
	   	        cout<<"ENTER FIRST NO. "; 
		        cin>>i;
			    cout<<"ENTER SECOND NO. ";
				cin>>x;
		        cout<<"MULTIPLE is: ";
		        multiple(i,x);
		        break;
		case 4:
		k==4;
		        cout<<"ENTER FIRST NO. "; 
		        cin>>i;
			    cout<<"ENTER SECOND NO. ";
				cin>>x;
		        cout<<"DIVISION is: ";
		        division(i,x);
		        break;
	    case 5:
	   k==5;
		       cout<<"ENTER NO. ";
		       double y;
		       cin>>y;
		       cout<<"SQUARE is:"<<pow(y,2);
		       break;
		case 6:
		k==6;
		       cout<<"ENTER NO. ";
		       cin>>y;
		       cout<<"SQUARE ROOT is: "<<sqrt(y);
		       break;
	}
	cout<<endl<<endl;
}
	return 0;
}