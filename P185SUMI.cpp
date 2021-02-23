#include<bits/stdc++.h>
#define lmao cout<<"\nLick mY ass oni-chann ~";
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vi resIn, resOut;
	int j,temp,i;
	for(int j=0;j<n;j++){
		cin>>temp;
		vi num_out,num_in;
		int t = temp;
		for(i=2;i<=sqrt(t);i++){
			if(t%i==0){
				int counter=0;
				while(t%i==0){
					t/=i;
					counter++;
				}
				num_out.push_back(i);
				num_in.push_back(counter);
			}
		}
		if(t!=1){
			num_out.push_back(t);
			num_in.push_back(1);
		}
		int out = 1, in = temp;
		for(int i=0;i<num_out.size();i++){
			if(num_in[i]%2==0){
				out*=sqrt(pow(num_out[i],num_in[i]));
				in/=pow(num_out[i],num_in[i]);
			}
			else{
				out*=sqrt(pow(num_out[i],num_in[i]-1));
				in/=pow(num_out[i],num_in[i]-1);
			}
		}
		resOut.push_back(out);
		resIn.push_back(in);
	}
	for(int i=0;i<resOut.size();i++){
		cout<<resOut[i]<<" "<<resIn[i]<<endl;
	}
	return 0;
}  
