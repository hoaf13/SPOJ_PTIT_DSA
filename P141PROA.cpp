#include<bits/stdc++.h>
using namespace std;
struct ketqa{
	int time;
	string m;
}kq[101];
main(){
	int k;
	cin>>k;
	int n;
	cin>>n;
	long tg=0;
	long vt=k;
	for(int i=1;i<=n;i++) cin>>kq[i].time>>kq[i].m;
	for(int i=1;i<=n;i++){
		tg=tg+kq[i].time;
		if(tg<=210){
			if(kq[i].m=="T") vt++;
		}
		else{
			cout<<vt;break;
		}
		if(vt>8) vt=1;
	}
} 
