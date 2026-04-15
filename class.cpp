#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		student(string n,int r){
			name=n;
			rollno=r;
		///	cout<<"Student Name: "<<name<<endl<<"Roll Number: "<<rollno<<endl<<endl;
		}
void show(){
	cout<<"Student Name: "<<name<<endl<<"Roll Number: "<<rollno<<endl<<endl;
}
};
int main(){
	vector<student>school;
		school.push_back(student ("sam",5));
		school.push_back(student ("tin",18));
    	school.push_back(student ("mat",8));
		school.push_back(student ("in",1));
		school.push_back(student ("ti",18));
		school.push_back(student ("tn",18));
		school.push_back(student ("tam",18));
		for(int i=0;i<school.size();i++){
			school[i].show();
		
}
	return 0;
}