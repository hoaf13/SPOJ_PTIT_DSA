#include<bits/stdc++.h>
 
using namespace std;
 
int const maxn = 1000000;
 
long long K, Dis[maxn];
string Name[maxn];
 
int main(void){
	int N;
	Dis[0] = 0;
	int key;
	cin>>N>>K;
	for (int i=1;i<=N;i++){
		cin>>Name[i];
		Dis[i] = Dis[i-1] + i;
		if(Dis[i] <= K) key = i;
	}
	sort(Name + 1, Name + N + 1);
	if(Dis[key] == K) cout<<Name[key];
	else{
		K = K - Dis[key];
		cout<<Name[K];
	}
	return 0;
} 
