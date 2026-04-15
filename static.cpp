#include<iostream>
#include<string>
using namespace std;
class customer{
	public:
		string name;
		int acc_no,balance;
		static int total_customer;
		static int total_balance;
		customer(string name,int acc_no,int balance){
			this->name=name;
			this->acc_no=acc_no;
			this->balance=balance;
			total_customer++;
			total_balance+=balance;
		}
		static void accesSatic(){
			cout<<total_customer<<endl<<total_balance;
		}
		void show(){
			cout<<name<<" "<<acc_no<<" "<<balance<<endl;
		}
		//void total(){
		//	cout<<total_customer;
		//}
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
	string x;
	int a;
	int i;
//	cin.ignore();
	getline(cin,x);
//	cin.ignore();
	customer c1(x,4923780,2000);
	customer c2(x,58767,800);
//	customer c2("tt",886876,9000);
	c1.show();
	c2.show();
	//c2.total();
	customer::accesSatic();
	return 0;
}
