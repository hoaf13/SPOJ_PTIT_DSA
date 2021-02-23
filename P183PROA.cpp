#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
long long dem1 = n,dem2 = 0;
long long arr[n];
double sum = 0;
for(long long i = 0;i<n;i++){
	cin>>arr[i];
	sum+=arr[i];
}
 
while(1){
	if(round(sum/dem1)>=k) break;
	sum+=k;
	dem1++;
	dem2++;
}
cout<<dem2;
} 
