	#include<iostream>
	#include<math.h>
	using namespace std;
	main()
	{
		long k,n,d,j,res;
		cin>>n>>k;
		bool ck[1001];
		d=0;
		for (int i=2;i<=n;i++) ck[i]=true;
		for (int i=2;i<=n;i++)
		  	if ((d<k)&&(ck[i])){
			    ck[i]=false;
			  	d++;
			  	if (d==k) res=i;
			  	j=i*i;
			  	while ((d<k) && (j<=n)){
				  	if (ck[j]) {
				  		ck[j]=false;
				  		d++;
				  		if (d==k) res=j;
				    }
			  		j=j+i;
			  	}
		  }
		cout<<res;
	} 
