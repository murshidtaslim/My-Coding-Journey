#include<iostream>
using namespace std;
int main(){
	int n;
    cin>>n;
for(int rows=1; rows<=n; rows++){//UUPER TRIANGLE

	int spaces=(n-rows);
	for(int space=0; space<spaces; space++){
		cout<<" ";
	
}
	int no_characters=2*rows-1;

	for(int charact_symb_num=0; charact_symb_num<no_characters; charact_symb_num++){
		 char ch=(char)('A' + charact_symb_num);
		cout<<ch;
    }
	
	
	cout<<endl;
}
for(int rows=n+1; rows<=2*n-1; rows++){
	int spaces=(rows-n);
	for(int space=0; space<spaces; space++){
		cout<<" ";
	}
    int no_characters=2*(2*n-rows)-1;
    for(int charact_symb_num=0; charact_symb_num<no_characters; charact_symb_num++){
    	char ch=(char)('A' + charact_symb_num);
		cout<<ch;
	}
cout<<endl;
}
	return 0;
}