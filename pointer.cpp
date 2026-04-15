#include<iostream>
using namespace std;
void hacker(int *ptr){
	*ptr=999;
}
void Address(int &i){
	//int score;
	//int &i=score;
	int *ptr=&i;
	cout<<"Your address: "<<ptr<<endl;
}
void gained(int &i){
	int *ptr=&i;
	cout<<"\nYour gained score: "<<*ptr<<endl;
}
void current(int &score, int &i){
	score+=i;
	cout<<"Your current score: "<<score<<endl;
}
int main(){
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	//int &i=score;
	//i;
	int i;
	cout<<"Enter your gained score: ";
	cin>>i;
	gained(i);
	current(score,i);
	Address(i);
	Address(score);
	hacker(&i);
	cout<<i<<endl;
//int *ptr=&i;
//	cout<<"\nYour address: "<<ptr<<endl;
	//cout<<"Your current score: "<<*ptr;
	return 0;
}