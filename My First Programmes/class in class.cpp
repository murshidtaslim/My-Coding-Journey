#include<iostream>
#include<string>
using namespace std;
class enemy{
	public:
		string name;
		int health;
		void damage(){
			cout<<name;
		}
};
class boss : public enemy{
	public:
		int extraArmor;
		void megapower(){
			cout<<name;
		}
};
int main(){
	boss b1;
	b1.name="cal";
	b1.health=1100;
	b1.extraArmor=2000;
	cout<<b1.name<<endl<<b1.health<<endl<<b1.extraArmor<<endl;
	b1.damage();
	b1.megapower();
	return 0;
}