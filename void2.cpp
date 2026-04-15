#include<iostream>
using namespace std;
int main(){
	int p, q, r, s;
	s=p-++r-++q;
	cout<<s<<endl; 
	int marks;
	cout<<"Enter your obtained marks :- ";
	cin>>marks;
    if (marks < 33) {
		cout<<"status :- "<<"fail"<<endl;
}
    else {
	cout<<"staus :- "<<"pass"<<endl;
}
	
	if (marks%2 == 0){
		cout<<"No. is odd"<<endl;
	}
else {
	cout<<"No. is even"<<endl;
}
int sci_marks;
    cin>>sci_marks;
    if (sci_marks < 33) {
    cout<<"Poor in SCIENCE"<<endl;
}
	else if (sci_marks >= 33 , sci_marks <= 55) {
		cout<<"good in SCIENCE";
	}
else {
	cout<<"excelent in SCIENCE";
}

	return 0;
}