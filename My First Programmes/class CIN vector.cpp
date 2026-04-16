#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		student(string i,int x){
			name=i;
			rollno=x;
            //cout<<name<<endl<<rollno<<endl;
}
void show(){
	cout<<"Student Name: "<<name<<endl<<"Roll Number: "<<rollno<<endl<<endl;
}

};
int main(){
	
	vector<student>school;
	ifstream i("Student Register.txt");
	if(i.is_open()){
	string k;
	int j;
while(getline(i,k)){
	i>>j;
		i.ignore();
	school.push_back(student(k,j));
}
}
	i.close();
	while(true){
/*	student.push_back(school("sam",5));
	student.push_back(school("tin",18));
	student.push_back(school("mat",8));
	student.push_back(school("in",1));
	student.push_back(school("ti",18));   */
	string name;
	getline(cin,name);
	if(name=="exit"){
		break;
	}
	int rollno;
	cin>>rollno;
	cin.ignore();
//	school(name,rollno);  
school.push_back(student(name,rollno));
}
	for(int i=0;i<school.size();i++){
		school[i].show();
	}
	ofstream x("Student Register.txt");
			for(int i=0;i<school.size();i++){
		x<<school[i].name<<endl;
		x<<school[i].rollno<<endl<<endl;
	}

	x.close();
	return 0;
}
		
