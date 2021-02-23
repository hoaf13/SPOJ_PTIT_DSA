#include <iostream>
#include <string>
using namespace std;
 
int bien[126];
int phu[126];
int dd[126];
 
void khoitao (){
	int dem=1;
	for (int i=97; i<=122; i++){
		bien[i]=dem;
		dem++;
		phu[i]=0;
		dd[i]=0;
	}
}
 
int main (){
	int t;
	cin>>t;
	for (int k=1; k<=t; k++){
		string ex;
		cin>>ex;
		cout<<"Expression: "<<ex<<endl;
		khoitao ();
 
		int kt=1;
		int N=ex.length();
		while (1){
			if (kt==0) break;
			kt=0;
			for (int i=0; i<N-1; i++){
				string tg="";
				for (int j=i; j<i+2; j++){
					tg+=ex[j];
				}
				if (tg=="++"){
					if (i-1>=0 && ex[i-1]>='a' && ex[i-1]<='z'){
						int so=ex[i-1]-0;
						phu[so]++;
					}
					else if (i+2<=N-1 && ex[i+2]>='a' && ex[i+2]<='z'){
						int so=ex[i+2]-0;
						bien[so]++;
					}
					for (int j=i; j<N; j++){
						ex[j]=ex[j+2];
					}
					for (int j=N-2; j<=N-1; j++){
						ex[j]='\0';
					}
					kt=1;
					N=N-2;
					break;
				}
				else if (tg=="--"){
					if (i-1>=0 && ex[i-1]>='a' && ex[i-1]<='z'){
						int so=ex[i-1]-0;
						phu[so]--;
					}
					else if (i+2<=N-1 && ex[i+2]>='a' && ex[i+2]<='z'){						
						int so=ex[i+2]-0;
						bien[so]--;
					}
					for (int j=i; j<N; j++){
						ex[j]=ex[j+2];
					}
					for (int j=N-2; j<=N-1; j++){
						ex[j]='\0';
					}
					N=N-2;
					kt=1;
					break;
				}
			}
		}
		int S=0;
		if (ex[0]>='a' && ex[0]<='z'){
			int so=ex[0]-0;
			S+=bien[so];
			dd[so]=1;
			for (int i=1; i<N; i++){
				string tg="";
				for (int j=i; j<i+2; j++){
					tg+=ex[j];
				}
				if (tg[0]=='+'){
					int so=tg[1]-0;
					S+=bien[so];
					dd[so]=1;
				}
				else if (tg[0]=='-'){
					int so=tg[1]-0;
					S-=bien[so];
					dd[so]=1;
				}
			}
		}
		else{
			for (int i=0; i<N; i++){
				string tg="";
				for (int j=i; j<i+2; j++){
					tg+=ex[j];
				}
				if (tg[0]=='+'){
					int so=tg[1]-0;
					S+=bien[so];
					dd[so]=1;
				}
				else if (tg[0]=='-'){
					int so=tg[1]-0;
					S-=bien[so];
					dd[so]=1;
				}
			}
		}
		cout<<"value = "<<S<<endl;
		for (int i=97; i<=122; i++){
			if (dd[i]==1){
				char kitu=i+0;
				cout<<kitu<<" = "<<bien[i]+phu[i]<<endl;
			}
		}
	}
	return 0;
} 
