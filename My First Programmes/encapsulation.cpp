#include<iostream>
#include<string>
using namespace std;
class employee{
	private:
		int empId;
        string name;
        double salary;


	public:
		void set(int x,string k,double j){
			empId = x;
			name = k;
			salary = j;
		}
			void get(){
				cout<<empId<<endl<<name<<salary;
			    
			
			}
			
		
};
int main(){
    int i;
    string k;
    double j;
    cin>>i;
    cin.ignore();
    getline(cin,k);
	cin>>j;
	employee e1;
	e1.set(i,k,j);
	e1.get();
	return 0;
}
