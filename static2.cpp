#include<iostream>
#include<string>
#include<vector>
using namespace std;
class customer{
	public:
		string name;
		int id;
		double balance;
		static int total_customer;
		static int total_balance;
		customer(string name,int id,double balance){
			this->name=name;
			this->id=id;
			this->balance=balance;
			total_customer++;
			total_balance+=balance;
		}
		void show(){
			cout<<"Name: "<<name<<"\nID: "<<id<<"\nBalance: "<<balance<<endl;
		}
		void deposit(double x){
			if(x>0){
			balance+=x;
			total_balance+=x;
        }
		}
		void withdraw(double i){
			if(i<=balance&&balance>0){
				balance-=i;
				total_balance-=i;
			}
		}
		static void accesStatic(){
			cout<<"Total Customer: "<<total_customer<<endl;
			cout<<"Total Bank Balance: "<<total_balance<<endl;
		}
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
vector<customer>cust;
while(true){
	cout<<"1. New Customers \n2. See Customers \n3. Bank Total View\n4. Deposit\n5. Withdraw\n6. Exit"<<endl;
	 int x;
	 cin>>x;
	 if(x==1){
     string a;
	 int j;
	 double k;
	 double v;
	 double n;
	 cout<<"Enter Customer Name"<<endl;
	 cin.ignore();
	 getline(cin,a);
	 cout<<"Enter Customer ID"<<endl;
	 cin>>j;
	 cout<<"Enter Customer Balance"<<endl;
	 cin>>k;
	 customer list(a,j,k);
	 cust.push_back(list);
	 }else if(x==2){
 	 	for(int i=0;i<cust.size();i++)
 	    cust[i].show();
	 }else if(x==3){
	 	customer::accesStatic();
	 }else if(x==6){
	 	 cout<<"exit()";
		 break;
	 }else if(x==4){
	 	int ID;
	 	double Balance;
	 	bool found=false;
		 cout<<"Enter Your Id: ";
		 cin>>ID;
		 for(int i=0;i<cust.size();i++){
		 	if(cust[i].id==ID){
		 		cout<<"Customer Name: "<<cust[i].name<<endl;
		 		cout<<"Enter Your Deposit Amount: ";
		 		cin>>Balance;
		 		cust[i].deposit(Balance);
		 		found=true;
		 		break;
			 }
		 }	 
	 }else if(x==5){
	 		int ID;
	 	double Balance;
	 	bool found=false;
		 cout<<"Enter Your Id: ";
		 cin>>ID;
		 for(int i=0;i<cust.size();i++){
		 	if(cust[i].id==ID){
		 		cout<<"Customer Name: "<<cust[i].name<<endl;
		 		cout<<"Enter Your Withdraw Amount: ";
		 		cin>>Balance;
		 		cust[i].withdraw(Balance);
		 		found=true;
		 		break;
			 }
		 }	 
	 }else{
	 	cout<<"Invalid!"<<endl;
	 	break;
	 }
	 
}
	return 0;
}
