#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

enum role{
	MAGICIAN,
	FIGHTER
};
union power{
	double punchpower;
	double magicpower;
};
struct player{
	string name;
	role myrole;
	power mypower;

void showdata(){
     	cout<<name<<endl;
	if(myrole==FIGHTER){
		cout<<"catagorie: FIGHTER"<<endl;
		cout<<"Punchpower: "<<mypower.punchpower<<endl;	
	}
	if(myrole==MAGICIAN){
		cout<<"Catagorie: MAGICIAN"<<endl;
		cout<<"Magicpower: "<<mypower.magicpower<<endl;	
}
}
};
void saveG(vector<player>&PlayerList){
	ofstream save("RPG Game.txt");
	for(int i=0;i<PlayerList.size();i++){
		save<<PlayerList[i].name<<" "<<endl;
	//	save<<PlayerList[i].myrole<<" "<<endl;
		if(PlayerList[i].myrole==FIGHTER){
			save<<"FIGHTER"<<" "<<endl;
			save<<"PUNCH.Power: "<<PlayerList[i].mypower.punchpower<<endl;
		}else if(PlayerList[i].myrole==MAGICIAN){
			save<<"MAGICIAN"<<" "<<endl;
			save<<"MAGIC.Power: "<<PlayerList[i].mypower.magicpower<<endl;
		}
	}
	save.close();
}
void loadG(vector<player>&PlayerList){
	ifstream save("RPG Game.txt");
	string i;
	while(getline(save,i)){
	cout<<i;
	cout<<endl;
}
	save.close();
}
int main(){
vector<player>PlayerList;
cout<<"===RPG Game==="<<endl;

while(true){
	cout<<"\n1. New Player"<<"\n2. See current Players"<<"\n3. See privious Players"<<"\n4. Exit"<<endl<<"\nEnter your choice: ";
	int i;
	cin>>i;
	if(i==1){
		player p;
		cout<<"Enter name: ";
		cin>>p.name;
		cout<<"\n1. MAGICIAN"<<"\n2. FIGHTER"<<endl;
		int r;
		cout<<"\nEnter ablity choice: ";
		cin>>r;
		if(r==1){
			p.myrole=MAGICIAN;
			cout<<"Enter Magicpower: ";
			cin>>p.mypower.magicpower;
			
		}else if(r==2){
			p.myrole=FIGHTER;
			cout<<"Enter Punchpower: ";
			cin>>p.mypower.punchpower;
		}
		PlayerList.push_back(p);
	}
	if(i==2){
	for(int x=0;x<PlayerList.size();x++){
		PlayerList[x].showdata();



}
	}
	else if(i==3){
		loadG(PlayerList);
	}
	else if
		(i==4){
			saveG(PlayerList);
		cout<<"\nexit()";
		break;
	}
}
	return 0;
}