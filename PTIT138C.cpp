#include<iostream>
#include<string>
using namespace std;
int xuly(char c){
	if (c=='A'||c=='B'||c=='C'|| c=='a'||c=='b'||c=='c' ) return 2;
	if (c=='D'||c=='E'||c=='F'||c=='d'||c=='e'||c=='f') return 3;
	if (c=='G'||c=='H'||c=='I'||c=='g'||c=='h'||c=='i') return 4;
	if (c=='J'||c=='K'||c=='L'||c=='j'||c=='k'||c=='l') return 5;
	if (c=='M'||c=='N'||c=='O'||c=='m'||c=='n'||c=='o') return 6;
	if (c=='P'||c=='Q'||c=='R'||c=='S'||c=='p'||c=='q'||c=='r'||c=='s') return 7;
	if (c=='T'||c=='U'||c=='V'||c=='t'||c=='u'||c=='v' ) return 8;
	if (c=='W'||c=='X'||c=='Y'||c=='Z'||c=='w'||c=='x'||c=='y'||c=='z') return 9;
}
 
int main(){
	int T;
	cin>>T;
	for(int j=0; j<=T;j++){
		string str;
		string s;
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			s+=xuly(str.at(i))+'0';
		}
		bool flag=true;
		for(int i=0;i<s.length();i++){
			if (s.at(i)!=s.at(s.length()-1-i)){
				flag=false;
				break;
			}
		}
		if (j==0 ) continue;
		if (flag==true) cout<<"YES\n";
		else cout<<"NO\n";
	}
return 0;
}
 
