#include<stdio.h>
#include<math.h>
 
double Distance(int xa,int ya, int xb,int yb){
	return sqrt(round(pow(xb-xa,2))+round(pow(yb-ya,2)));
}
int main(){
	int t,k;
	scanf("%d",&t);
	for (k=0;k<t;k++){
		int k;
		scanf("%d",&k);
		int xa,ya,xb,yb,xc,yc,xd,yd;
		scanf("%d%d%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd);
		double disab,disac,disad,xe,ye;
		disab=Distance(xa,ya,xb,yb);
		disac=Distance(xa,ya,xc,yc);
		disad=Distance(xa,ya,xd,yd);
		double x=(disab*disac)/(disad*k);
		// cout<<disab<<" "<<disac<<" "<<disad<<" "<<x<<endl;
		if(x>disac) printf("No solution\n");
		else{
			double xe=(x/disac)*(xc-xa)+xa;
			double ye=(x/disac)*(yc-ya)+ya;
			printf("%.2lf %.2lf\n",xe,ye);
		}
	}
	return 0;
} 
