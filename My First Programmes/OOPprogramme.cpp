#include<iostream>
#include<string>
#include<vector>
using namespace std;
class media{
	public:
		string title;
		double rating;
};
class Anime : public media{
	private:
		int quality;
		public:
			//string name;
						
void setquality(int q){
	if(q==720 || q==480){
		quality=q;
		cout<<title<<endl<<quality<<endl;
	}else{
		quality=720;
		cout<<"default resolution 720p"<<endl;
	}
}


	void show(){
		cout<<"watchlist-> "<<title<<endl<<"[Quality-> "<<quality<<"]"<<endl<<"Rating-> "<<rating<<"/10"<<endl;
	
}
void download(){
	cout<<"Downloading "<<title<<" in default 720p...";
}
void download(int f){
	quality = f;
	cout<<"Downloading "<<title<<" in ultra-clear "<<quality<<"p...";
}
};
int main(){
/*Anime a1;
a1.title="Tom & Jerry";
a1.setquality(480);
a1.rating=8;
a1.show();
a1.download(480);*/
vector<Anime>Watchlist;
while(true){
	int x;
	cout<<"1. create new list\n2. see list\n3. Download anime\n4. exit"<<endl;
	cin>>x;
if(x==1){
	Anime anime;
	cout<<"Name Of Anime"<<endl;
	cin.ignore();
	getline(cin,anime.title);
//	anime.title=
    cout<<"Rate this Anime Out Of 10"<<endl;
	cin>>anime.rating;
	int q;
	cout<<"Enter quality 480/720"<<endl;
	cin>>q;
	anime.setquality(q);
	Watchlist.push_back(anime);
}
	else if(x==2){
		for(int x=0;x<Watchlist.size();x++){
		Watchlist[x].show();
	}
		}else if(x==3){
			for(int i=0;i<Watchlist.size();i++){
				int o;
				cout<<"Enter Quality For Download "<<Watchlist[i].title<<" 480 or 720"<<endl;
				cin>>o;
				Watchlist[i].download(o);
			}
		}else if(x==4){
			break;
		}
cout<<endl;
}

return 0;
}
