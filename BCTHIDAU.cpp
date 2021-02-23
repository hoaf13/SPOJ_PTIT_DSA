#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
struct thisinh{
	string name;
	int	p1SuB;
	int p1Time;
	int	p2SuB;
	int p2Time;
	int	p3SuB;
	int p3Time;
	int	p4SuB;
	int p4Time;
};
 
struct hinhthuc{
	int solan;
	int time;
};
	
int main(){
	int n; 
	cin>>n;
	vector<thisinh> ds;
	for (int i=0;i<n;i++){
		thisinh tmp;
		cin>>tmp.name;
		cin>>tmp.p1SuB>>tmp.p1Time;
		cin>>tmp.p2SuB>>tmp.p2Time;
		cin>>tmp.p3SuB>>tmp.p3Time;
		cin>>tmp.p4SuB>>tmp.p4Time;
		ds.push_back(tmp);
	}
	vector<hinhthuc> ds2(n);
	for(int i=0;i<n;i++){
		int dem=0;int fine=0;
		if ( ds[i].p1SuB>0  && ds[i].p1Time !=0 ) dem++;
		if ( ds[i].p2SuB>0  && ds[i].p2Time !=0 ) dem++;
		if ( ds[i].p3SuB>0  && ds[i].p3Time !=0 ) dem++;
		if ( ds[i].p4SuB>0  && ds[i].p4Time !=0 ) dem++;
		ds2[i].solan=dem;
		if (ds[i].p1SuB>0 && ds[i].p1Time != 0 ) fine+=(ds[i].p1SuB-1)*20;
		if (ds[i].p2SuB>0 && ds[i].p2Time != 0 ) fine+=(ds[i].p2SuB-1)*20;
		if (ds[i].p3SuB>0 && ds[i].p3Time != 0 ) fine+=(ds[i].p3SuB-1)*20;
		if (ds[i].p4SuB>0 && ds[i].p4Time != 0 ) fine+=(ds[i].p4SuB-1)*20;	
		fine+=ds[i].p1Time+ ds[i].p2Time+ ds[i].p3Time+ ds[i].p4Time; 	
		ds2[i].time=fine;
	}
//	for (int i=0;i<n;i++){
//		cout<<ds[i].name<<" "<<ds2[i].solan<<" "<<ds2[i].time<<endl;
//	}
	string name="";
	hinhthuc max;
	name=ds[0].name;
	max.solan=ds2[0].solan;
	max.time=ds2[0].time;
	for (int i=1;i<n;i++){
		if (ds2[i].solan>max.solan){
			name = ds[i].name;
			max.solan=ds2[i].solan;
			max.time=ds2[i].time;
		}
		if (ds2[i].solan==max.solan){
			if (ds2[i].time<max.time){
				name = ds[i].name;
				max.solan=ds2[i].solan;
				max.time=ds2[i].time;
			}
		}
	}
	cout<<name<<" "<<max.solan<<" "<<max.time;
return 0;
}
 
