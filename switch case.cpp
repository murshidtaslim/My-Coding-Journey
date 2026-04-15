#include<iostream>
using namespace std;
int main() {
	int day;
	cin>>day;
	switch (day) {
		case 1:
			cout<<"MON"<<endl;
			break;
			case 2:
				cout<<"TUE"<<endl;
				break;
				case 3:
					cout<<"WED"<<endl;
					break;
					case 4:
						cout<<"THUR"<<endl;
					break;
					case 5:
							cout<<"FRI"<<endl;
					break;
					case 6:
							cout<<"SAT"<<endl;
					break;
						case 7:
								cout<<"SUN"<<endl;
				        break;             
					default:
						cout<<"Default case";
							break;
	}
	return 0;
}