#include<bits/stdc++.h>
#define hoaf cout<<"\nhoaf13. I'm here ~";
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
const double pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int nmax=10004;
 
int n,k;
int a[nmax],b[nmax];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int check[nmax]={0};
	int d=0;
	int kq,vt;
	while(d<k){
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				kq=a[i];
				vt=i;
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(a[i]>kq && check[i]==0){
				kq=a[i];
				vt=i;
			}
		}
		check[vt]=1;
		d++;
	}
	sort(b+1,b+1+n,greater<int>());
	cout<<b[k]<<endl;
	for(int i=1;i<=n;i++){
		if(check[i]==1) cout<<i<<" ";
	}
}
//r.:,;,;.;,;,r,;,;,;,:,;,r,;,r,r,;,r,;,;,;,r,;,r.;,;,;,r,:,;,;,:,r,r,r,r,;.;.:.:.;,L;z;Cb$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@0B,Fr
//,,.;,:,;.;.:.:.;.;,;,,.;.:.:,:,;.:,;.;,:.:.:,:.;.:,:.:.;,,.:.:.:.:.:.:.: ,.,.ccJcI;JcOB$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@8,z9
//;.;,;,;,;,r,;,;,;,;,:.;,:,r,r,;.;,;,;,;,:,;,r,;,r,;.:.;,;,;,;,:,;.;,;,,,;;cLZcjLFS0$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@@
//::,;,;.:,;,r,;.;.r,;.;,:,;.r,r.;,;,;,;,;,r,;.;,;,;,;,;,r,r,r,:,;.;,:.,.zcCLZLkS$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$
//;.;,;,;,:,;.;,;.:,;,:,;,;,;,r,r.:,;,;,:,;,;,;,;.;,;,;,:.;.:,;,;,:.: .:Icb9BH$#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#S
//,;,;,;,;,;.:,:,;,;,;.;,:,;,r,;,;.:,:.;,;,:,r.;,:,:.;,;,r,:.;,;.:.,:cLeZ$Bd0@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//;.;,;,:,;.;,;,:,;.;,;,;,;.;,;,;,:,r,:,:,;,;,;.;,;.;,r,;.:,r.;., :;ZJkZ$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//,:.;,;,r,r.;,;,;.;,;,r,;,;,;,;,;,:,;,r,;,r,;,;.:,;,;,;,;,;,;.rrZFBOD6$0@@@@@@@@@@@@@@@@@@@@@@@@@@$H$HB6$G$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//;,;,r,:,;,;,;.r.;,;,:.;,;,r.;,;,;,:,;,r,:,r,:.;,;,;.;,;,;.;.rce6DOHB$8$$@@@@@@@@@@@@@@@@@6dJJzJ;JLJrJcJzCFbSHH$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//,:,;,;,;,;,;,;.;,:,;,;.;,;,:,:,;.;.;,r,:,;.;,;,;,;.;,;,:.r:IcZB$D@$@@@@@@@@@@@@@@@@@OSrL:z;z;cLJrZcCJZcjzKFKC9kG8$B$#@#$$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@
//r,r,:,;,;,r,:.;,;,;.;,:,r.r,;.r.;,:,:,;,;,;,:,;,;,:,;,;.;:crCG$B$@@@@@@@@@@@@@@$krc;L:L;c;z;Jrz;JLJceJeJZFeJ9CSZ6eBO$O$G$$@$$$@@@@@@@@@@@@@@@@@@@@@@@@
//,:,;,;.;,;,r,:,;,;,:.;,:,;,;,r.;,:,r,r,:.:,:,;,;,;.;,;,:.Jc9B$D@@@$@@@@@@@@@bc;L,;:r,r:J;crJrzrJrzrFcCzZzZzZJjIZzKFOjd6d9$0$B$$$0@@@@@@@@@@@@@@@@@@@@@
//r.:,;,:.;,;,r,:,r,;,:,:,r,;,;,;,;.;,;,;.;,;,;.;,;.;,:,,,JzO0@$@@@0@$@@@@@$J;r.r,r:;:L:r:z;crz;J;zLjLJcFJjcCzjzKJeJZzZzZIbed9BdD80B$$$$@@@@@@@@@@@@@@@@
//,,,:,:.;,r,;,r,;,;,;,;.;.r,;,:.:,;,;,r,r,;,;.;,;,;.:.; cJG0$$@$$$@@@@@$8rL,;:;,r,r:L:c;c;c;J;zLI;JcJLCLFcjcjJCcZJZzjzZIZjbKGkObBOB8$B$$@$@@@@@@@@@@@@@
//;.r,;,;,:,;,r,:.;,;.:.:,r,;,;.;,;,;,:,;,;.;.:,;,;.;.:.CzZ8$$@D@$@@@@@CJ:;,:,r:r,;:c:L;c:J;z;JLJrJLIrILIzIJFcZJeJZJZJCzZJKF6ZkZGedk06B8#G$d$k08##@@@@@@
//,:,;,;.;,;,r,;,:.:.;,;,;.;,;.;.;,:,:,;,;.;,:,;,;,;.;.LzOH$$@@@$$$@@8LL:;.;,:,;:;:c:LrJrJrzcIcJrjLILJcjcFLFcFJZzCJeJZzeIZzeIZFkjKCdKHCdCejSjkSbZ6S#@@@@
//;,;,:,;,;,r,;,r.;,;,;.;,;.;,;,;,r,;,;.;,;,;.:.;,r,r.,rZb#D@$$B$$@$F;r,:.;,;,:.;,r:r:crz;c;JLcrz;zrIrJrFcJzCcCcCcjzZJZzZJeJCJeJeCecZzZJezjzbJezkZH9HH@@
//,:,;,;.:,:,;,;,r.;,;,;,:.:,;.;.:,;,;,;,;,r,;.;,;,;,:,CJGG$#@d@@@GC;:.,.:.:.:,;,,.:.:.;.;,r:r,c:L;zrzrzLJcFzCcFcFLezZcCJjJKJkIZJCFeFKJSJKJZJCJjJezCcJJ@
//;.;,;.;.r,;,;,;,;,;,;,;,;,:.;,;.;,;.;,;,;,;,;,;,;.;.zJK6$$@8$$@dJ,, :,;:r:cLFrJ;c:;,;,r,;.;,r:c:r;c;JrILJrJLFcjcjLJzjcZFkIeIZJZJSFZJkJSISFSzeJZcCJeJeL
//,:,;.;,;.r,;.:,:,;,;,r,;,;,;,:.;.;,;,;,;,;,:,:,;,;.,:ZzGB@OZO#CF:;:zzCJZceFeZB$$$$$@69ZSLJrL,L,r:crcLJLzrzLjcFcCLCcZJZcCJZcCJZJKFSJeFbJKe9k6IKFZzKJeIZ
//;,:.:,;.;.;,;,:,;,:,;,;,;,;,;,r,;,r,;,;,;,;,;.;,;,,;CFe90IIZ$FJ;JrFcFcZzSjBH@@@$@@@@@@@@@@@@@GercrzLFrJLjcIrjzjcZzCzZzCIFcFzjcFcjcCJeIZFeJKjSjSzCJKJZz
//,:,;,;,;,:,;.;,;.;,;,;,r,r,;,;,;,;.;,;,;,;.;,r,;.:.IzjK$ZKeBJz:r,;:LcCI9kde$$@$@@@@@@@@@@@@@@@@@@$kJLJLjJJLJcZJZzFzZzZzCcjzCzCLFJCzjcjJejKJCJeJKzjzCzF
//;.;,;,r.:,:,r,;.:,:.;.:,;,r,r.:,;,;,;,;,;,;,:,;,,.,.LrjcCZK;, . ..LrJzeJeJjcIc9Sde$@@@@@@@@@@@@@@@@$09ZzILjzZzFcZzCceIZcFLZzezILZcFcjLCcCcZJCzZJeJCcKc
//::,;,;,;,r,;,:.;.:.;,:,:,;,:,;,;,;,:,r,;,;,;,;.,.jJ9CGH@BBZkZHSHekCSFSFCrc:r,L:c;c;jC$@@@@@@@@@@@@@@@@9SLZZ9IjJFcCJZJeJjzezCJZzezjLFcJLz;ILZJZzZJeICJj
//r.;,;,;,;,;.:,;,;,r,;.;,;.r,;.;,;.;,:.;,;,;,;,; J$$#@@GrJLjCI;zrIcZCkZ9b$$$$$Oecz;L;LrOO@@@@@@@@@@@@@@$dG8#ZjcZJZJIJeJCzZFZzZzZJjJFcJrz;c;JrCJSzZjZjZc
//,:.;,;,;,;,;,r.:,:,;,;,;.r,;,;,;,:,;,r,r,:.;.:.;SdB$@J ;LzJJ., :,L:r,;.:,r:zceG@@@@@0DSHe0D@@@@@@@@@@@$@$@HGKKIKjGebjezZF6IZjKJZcJzFLFrc;L,;:JLjzKjkZe
//r.;,;,;,;.:,;,;,:,:,;.;,:,:,;,;,:,;,;,;,;.;.:.,z#S0@C ;ceFc.,,L,;,;:L;c:z;L:L;c;crjZ$@@@@$@H00@@@@@@@$@$@B#e9Z9eB6Dk8e9S8k8b8KHCOCHS6ZGZ6cc:r,:.;rFzZF
//,:,;.:,;.r,;,;,;,;.;,:,;,:,;,;,;,:,:,:,;,;,:.:,ZzD$@ ,LKCL ::zcCLFLJLJrz;zLzLJrzLz;c:cIHB@@@@@$$B@@@$@$@#$9db89B6$G098B$0$#@$@@@@@@@@@@@@@$$eI;r.;.rrJ
//;.;,;,;,;,;,;,;,;,:,;,;,:.r.;.r,;.;.;.;,;,;,:.;CCc@JJ:JzL ,,r:zzbe$$@$$GBZezZcSC6C6SdZkKdI6S$$@@@@@$$B$$#D8kBkH6$H0G$B@$@@@@@@@@@@@@@@@@@@@@@@@@$9Crc:
//,:,;.:,;,;,;,;.r,;,;,;.;,;,;,;,;,;.;.;.:.:,;.;.rCZ8JI6z;.:.;,;,;:L;JJH@@@@@@$$9GO@@@$@B#dO8#K9KB$@@@@$SOJKF9Cdk$H#B$#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@D
//;.;,;,;,;,;,;,;,:,r,;,;,:,:,r.;,;,;,:,r,;,r.:,: z68 ck;.r:;,r;crFcFcZcKIbO$$GSBek@@@@@@$@ODH$D$d8j@@@@@@@#DZ6CGOBG$D$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//,,,;,;,;,;,;,;.;,:,:,;.;,;,;.;,;,:.;,:.;,;,;,;,;LH9:;: ;;c:;;r;crjcZJkSGK9jZLOG$$@@@@@@@@@B0B$6B9kc@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//r.r,;,r,;.;,:,;.r;;,;,;:;,;,;,r,;,;,:,r,;,:,JLJLc;@,..:,c;Lrz;zLccJLjJeeG8$G$D@$@$@$@B$B@@$bBkZze:$@@@@@$$@@@@@@@@@@@@@#@DDb8HBG$$$dDOGKk6BKdZBd$$@@@@
//,;:r,;,r:;,;,r,r,r:;:L,;,;,;,r,;,r,r,r,;.::cLZzI..#d.,.L;crJrF;zrIczcFcjckc96#d$0$88k$B$d$BBS6LJ;H@@@Z,L:z;Ib#@@@@@@0$@$$$8$D$0$D$B$B$G$G8S9H$D$88KJI8
//L.r:;:;,r:r,;,L:;,L;r,r:L,L,;:;,;.:,;,;,:,JcZcz,:.,j$KI,;:zcJ;c;c;zrJLILIcILjcOb0H$Z9b$#$SdzZLJ;@@@jL;CJjcjk$B$@@@@$@$@@@$@H$ddZkSHkkIdk8OB8#d$$@@@@@$
//;r,r:r;r.r,L:r:L,;,L;L:;,L,;,;,:.:.:.r,:,Crr,r.,,;,,.CS0ZZrL:L:c;z;zrI;crJrJLZcCzZcCcFzSZCcJLz;@@@;zcCzCLJJS9@$@@@@$B$$$8$B$$@D$B0jF;ZC8kG6DB$H$B$$@@@
//c,r;c:r:;,r,;,r:L:r:c:L,r:r,;,;,;,;,;.;.c;:,z,:,;,r,r,::Ze8dHFFcz:c;c:JLJrJrFcjcFzJLJrjLJrJ;;L@@@ZZzILILFzZZdG@@@@$B$OBO@@@D@@@@@@@$@$$#$B$8#dD6$$@B$Z
//;r;L;c:z;;,r:c,L,L,r,;;L,;:c:;,;,L,r,;,,,LLbz:,r,r,;,L:r,:,rrCjBH$9OZjcF;c:L;crz;z;c;c;L:;,z@@@9;c;c:c;cLIzZF8$@@@D@$$$@$@$@@@@@@@@@@@@@@@@@@@D$bdS6C6
//z:c;L;L;z;r,c:L;L:r,r,;;c:L:r;c:;,L,r,,,zzejr.;,r:L;L:L:L;J;J;L:crFzkd$B$$@$$$@9D9GC6SSJH0@@@cL:c;L;z;c;J;FJZc8@@@$#$8$G#D$8$D@@@@@@@@@@@@@@@@@#@BjrDH
//LLrJLJ;zrJ;r,c;c:r;c;r,rrc;L;L;L:L:L:;,FJZFL.;.;:rrJ;c:L;zrzcIcjzCcJrJ;zrJzjJbedk9bdS8H$@@jL:r:L:r:c;L:L;c;JzCK@@@SCCdd$$@@@@@O$#@$@@@@@@@@@@@@@@@$0BD
//F;JrzczrFLI;;;LrJ;z;c:c:r:c;c;z;L:z;;,rLbJF,:,;,L:c;c:LrJLJrJLIcFcCzZJezZJZzjcCcIrI;JrJcJ,;;crJ;c:L;L;c;z;zLJc9G@@@JJzHG$d$0#BBG@@@@@@@@$0@@@@@@@@@@@D
//Lr.,,IczrIrzrL:c;z;z;c;z;c;ILz:L:z;L.r:;:rr:.;:;;c;c;Irc;JrJcIcFrjzCzIcZJZzZCKeHK9JZLIcJLJ;zrc:;,L;c:c:J;crJLFC8#@@@KIceZOK#bO6$$@@@@@@@D@@@@@$@#@@@@$
//J;J;;;L;zrFLIr;:zLJ;J;crz;Lrjrzrc;c,:rL.;:;.;,r:c:c:zrz;zrzcJrILJLFzjzZJKjZJKZ9cc,;:;,r:r:c:r:;.;:c;zLFczLcLIzZS$$@@@@@GdeSFSCBk#O$$$0GZD$@$$d$0$0D6D$
//,jLr.ZzJrzrzLZrzzILzcFLzrJ;c;zLCLFr,.,.rcI.:,r,L:L;J;JrJLJLJcFLFcZcjJZzCJSJbej,,.:.;,L,L,c:L:c:JLJLzrJLIrIrJcFzSd$$#9$$@@@@@6OFCzZFdej;c;8HHb$O0O$bKI@
//z,, c@0DOJOJ:.,:J:c;;,r,L:;,;;jzFFC :,crF:;.;,;;L:JrzrJcFLFcIcjzjzFJZJZJeIeCC;LrIrILzrJcIcJLjLCzCJCcjzCJCcZJkzjJO8@@$KKLjZ#@@@@@@BOJr:rrzIGb8OdkbIZL6Z
//J;.,J$CJL;rjcJ . ,,;.r,:.,., zCFc@@b;J:c;:,;,;,r,LrILJrILIzjcjcezZzZIZzZJCzZLZeHd$$@@@B8bBOOZdFZzCJKjSZ9SB6BkdS6zFLk6$BGjerc;JIB$@@@@@@@88CZrz;c:c;rrr
//.,eZHGK,;J6zrzI;c,LL;,Z::,:.,:ScL,r;c;IJr.;,;:;,:rZLIcJLIcIzZJCIecKzKcFcZzZFSk$0@@@@@@@@@@@0$BD9DdB68dBHBD$B$B$kjrc:zr$$$9bFZLJrJrIcZb#$@@@@@@@$$0@0$d
//rcj0OSLZJZcjrJ;Z;ccI;:;J,:.L:r:. . .,cLe,;,;,r:cICJFLFLILjzZjezZIZJSJIzJLFcCC$B#d@@@@@@@@@@@@@B$D$#$B$d$D$8$0$BGjezZczrCKGbBZ6JZLJcFcJLILjzZj6KBeKFS9@
//.L$SS.,;J;; r:;;L;crcLL.:,:rJCFrCcc:crI,:,;,c:zF$jjcjzZzZJZzZJZFCJZzjLIrJrcrJZ@$$ddG@@@@@@@@@@0B$$@$@$$B$$@@@@@$$BDGBK6LCCeJZzKZSzCJjJZcFJkCOIZcFLzrC$
//.Zd$...:.;.;;cckJJrJJF.:.;,jrJ;zCdIecJ;:,r,zrJ;JJCLjcjcZIeJZzjJjJCLzrc;J;crc:rLZbdjCLzrIZD$@0$9@$$$@0@@@@@@@@@@@@@@@$$89jkjezZF6SKJZJZIeJeJSeSJbJSJJk@
//@6$C..:.;,JczrIzeZSLz,:,JzC;;.,.;Lc;crL,;:cLI;z;FcjJZJCJezeJeJjzFcJrJrcrc;z;c;c:c:L;J;c;JFD0@@@$@#$$@@@@@@@@@@@@@@@@@B$9DZSZZF9ZkJkZOCeIOJKzZJKK6K6zD0
//0O$Z ;,:,zrCzKzJzZeezFLC::,zzZLr.;:crI,;:z:IrJLJzZJCJZzZFKJeJZJjLZLJrJrz;z;L;cLcrJ;crJLJcZI6O@@@@@@@@@$@@@@@@@@@@@$@$$Bd6GeHeOZ6Z6ZdKHZkZbIFF6CkKOc0@@
//BJF::.:,;,:.:.L,zLJzI;c,zLzrJ;c,;rJJeL:,;;cczLjzezZzZJjIZJKJZJZcZcIrJrjLzrJ;J;zrzcILzrjzZJZLSb#G#B$d$0$9##$B#6D8DD$$@B#k$9dSOZHKdZbZ6bOS9e8eOZG6HCH@@@
//BZ ,.;.;.;,;,;.:.:.J:,.:,;,jIF;J;ILFcr:;;JrjcCLJcZzCJZIZZGZKIezZzCLjcJrzrJrzLILJrzLCcILCzCcFcbjJrZcZC99Bb$8BB@@@@@@@$$GGKHkBkH9B6GK6Z06HbB6BbGS#b8@@$@
//@,..:.;,:,:.;,;,:.:.,.:,:.;LZzCzFzIzK:r:cLFcJcjLjcjJeZkZ8SezZFeJZcIcJcz;z;crIcjcjLFLJLZcjzeJ6ZFcFcZISZOb99dSHSB8#d$G#H$kH98dBdDO$68OBGBOBOD6DBB6S@@@@@
//@, :.:.;,:,;.;,:.:.:.: , ,.;IeJOZ8Z8Cr;z:zLZLCzjcjJZJKZ8O9zFedZZcIrjJCzFLFrFzFzZcCrFcFzZJZZBedJFJCIKISZOjB98KHk9ZG9BOBODHDO$G$BB8#G$GDG$$$bBG$O9CkS@@@
//@z;,;,:.r,:.;,:,;,zJeZZ;. . ;rIcKCBBB;L;L;jzCzjzZJCzeJ669cKeHZKcCzFcZLJrFLJLIrJLIczrJLCzSFdZbKkFZzZCH6Bb8SO68SDZkK86BO#b#H$8Dd$G#8#B$8#O#O$H#SS68FZLFF
//@b;jrc;;.,.::;,;,;,C8@@@@c.c,,..:;;Bjc:z;JrjzZJSJSJZz9jOZSK$BDFI;crc;L;zrz;z;z;c;z:L:JLjF6ZBCCJeISjO906BkGk9eHS9ZHeB9$dBB#8$O0HDH$B$G0G$H#B$O9K$B$$$$$
//dcjZ@8b8DczrjJIFC;r,Z@@@@$JH@#$jC;czkccLJrJJeFeJeFZIKC9ZG9$$@@@BSrJ;cLFLJcILIrjzZrFLjzF;JJbeZcJrFzZjHSBGB6OS86HZBk9bDd#O$G$8#8$G$8$B$D#9@$$SG8$$$#@@@@
//ZcLLz$@@@@,;JerJrL;IK@0J$H@@@@C::brFIeLJLILeJSJZjkIkjGZHk$$@@@@@@@@@@@@@@@$@@@@@$@@@BBKkzJrI;c;JLjFkK69$H$GDdHGBSB68O$B$8$0@##G$B$B$D$#0d$O96$8@B@@@@@
//e;jz; L@@KIrKzbCI;L,r,L6@ec:; ,;b$zceFZrILJLIF8jSZ9eH9#dHdD98k9O$@@@@@@@@@@@@@@$@@@@@@@$@ZSFSIKKBO8ebZ9KBG$BBb$B$0$D$d$8$$$$$B$B$D$$$8$b0d6zZk0H$$@@@@
//;;:r,::L;@@$rZIZcCJFrJB$:: . ::IZI.c;J:;rCLFcKZbzZI89DdBbOZSFecZLcrZI9G@@@@@@@@@@@@@@@@@@@#@@@@@@@@@$#SdZH68d$$$$@$@#@D$$@$@$@$$D$d$8#d$GOzjLO6$H@D$$@
//KcjLILJ.J@@z;LIcZj6CFrJ:;,:r6Ze;JL:.,.:.LLjLIzSIeFZF9KOC9CCcZzZJeLzLzcIcZkB$@@@@@@@@@@@$@$@@@@@@@@@@@@@$$dOODG$$$$@@@$@$@$@$@0$$$D$B$bGdk:IJKbBH$B$$@$
//ZIzZKSc;,L,,,zLFjHjeLL;c:r,cc@@KLz,;;F@@eFcCceJSFZzZIeFGCCJCJezKzCLJcIcZLFLzrkB@@@@@@@@@@@@@@@@@@@@@@@@@@@0B9$H@$@$@@@@@@@D$D@B$8$0$HDS0@HrFLj$@$@@@@@
//;.zB0CSzFLz ,.;;keKzJrZ;;,c;zLZJ0kZD@@@@@JJzCcZIZzCcCJejKzCJCIezFJCzZzZcZzZLIrz;Zb$@@@@@@@@@@@@@@@@@@@@@@@@@@$@$@@@@@$@$@$$D#B$B$G$D$e#@@@zLz:JO@@@@@@
//;;;$LccZFJ;LrLL@zCZFcjLL:rzJLFLjJZF9JZzCeKJjzCzCzFcCJZzSFeCSIZJZJbZOZKJeFOJjzZLJ;JJ6k$$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$$@D$0$B$G#0Bk$@@@k,FzJrjZ$$@@@
//ZcKzjF@@S;ZFJ;bI;;zLZJ;::.;rzcZzFLjZjzZcCIz:ZjezKzFcZzZJ6Z9C6JeZ9Z6Zdd8ZKFOC6SBSdKkIZI9C6ZH6B0@$$$$#$G$B@@@@@@@@@@@@@$@$@0$$@B$8@D$9$@@@0,zLZcJJdB@@@@
//KIIKd@GZ:IZSLJze;L;ezJ,, ;zZLJcKIFI0zCJCJ9;;LKFKJjzILZJKZbFSjOZdZdkdkB8$8D9DkDkdZGedZdZdS9ZOj96DO0HDH$B@$@$@@@@@@@@@@@$$D@0@0$B$$$8@@@@@zc;zJZzK8@$@@@
//#,rIHZC:zzKJ6CkcLrZJZL;;L:SJZcbjjzeH9jSJkJr;zcKIZzjcCJKJkK6C9C9SHOBSDG#D@$@#$8#H$k8b8B#6#H0H0B$8$8$B@$@@@$@$@$@@@@@@@$@H@$@$@$@$$$@@@@@@CBZcZCKZ#$@@@@
//JLcdbKrcLSr::jZF;CFZzjLKFCcKzZGHe#D#FjcJLr:ILecZJCJjzKJKjdkdKdCdZHkBH$G$$@@@$$0$$$B$#$D$B09#d0d$D$0@$@$@$@$@$$$@$@@@$@$@$@$@@@$$@@@@@@@@L$HFcZSBB@@@@@
//ZrZK6rLrZ9; ccL;IISIZzzrCcIcB@@ZIrr.,.r;L:zcjJKIeIecZzZJbj9ZSekekeHkDODd$$@@@@@@@$@@@D$0@D@$@$@$@$@@@$@@$$$$@$@$@@@@@@@@@@@@@$$$@@@@@@@$ck@zjcKO$$@@@@
//DSK$ccrjzZzzLJrZzCJZZGFBb8#BCF::.;.r:zIK;zcjzeIZjKJZJecZjZZZISCdFdKOKb986$$@@@@@@@@@@@@@@@@@@@$@@@@@@@$@$@$@$@$@$@$@@@@@@@KGFD0@@@@@@@0H:Z$ezCzBB@@@@@
//eI8ezLejH$jceCeI6kH9BH$BKcz,:.;;zrFLZF@rLcjcZzZC869jSFeCkJbC6ZbZKISzZJZJeFOO$$@@@@@@@@@@@@@@@@@@@@@$@$$$@D$#$B@$@@@@@@$;r:cz98$$@@@@@OKLzz$zZJjc$@@@@@
//.zBz :,C$@$ezZceJZJ$$8rL.,,r:zLjrjZ@@@L;cZzeJCIbkBG8Z9Zde6COK9C9CdjKjCzCzZFeZBH$0@@@@@@@@@@@@@@@@@@@@$$@0@$$$@$@$@@@$8.;;IcG6@$@@@@@CJcIrCSZJZJZI@@@@@
//::Z.:.:.zzkzFIIrJcz:;.::c;JrIrJLS@@@@;:rIzZJZIbZde#d$8D99e8KDOG6dZ6ebIkZ6jZjH6GZ0B$#$0@$@@@$@@@$@$@@@$@@@$@$@@@@@$dj$L;rZc660$@$@@@OzrILFJOcFJKIZB@@@@
//:c;c;J;;.:.:,L,rrr,::r;J;JLjcIz0@@$r ,;JcezeJSCHk6kBH$0$0$B$8$B$GGeBe8KOZ9KHkHGBd0O0dBO00$B$$@$$#@$@$@$@$@$@@@$$O0eKdz:jcCK0d@#$@$@$;z;zcbCJcCJkzH$@@@
//;;099JjzZIOKHKc,;:c:zrzLIcjzkZ@@@;, ;rjzZzZzeZHSBO06BO$H$0@$@$@$$0$8DOB6BB$9Gk06#OB6DODH$G$#$$$$@$@$@$@$@@@$@8He#D$66:JzZJGO$0$$@B@$z;c;IZJrJzjICZ$@@@
//zcLeIIrr;L,eJ;,L;JrJrJLILCFHG@@H,,,c;IzCJezeF9eKk8HBS$G$0$B$$@$@$@$$D$0$0$0$G$D#H$B$8$8$B$$@$@$@@@$@$@@@$HcjbBB#B@$#LrLZISK0B$$@$8$@jIrcLS;;:L:JcZS@@@
//@@@ZIcJ;c;r,L;z;JLzLJLJcFC6B@@e,;,cLILjzZJSZ6C6ZGSBbBO$D$0#G$$$$@@@@@$@$@$@$@$@$$$$$$D@#$#@$@$@$@$@#@@@$$F;.r;e8@@@$z,zzCCdK0B$8ed@ekZI,JJL,;.;;FIB$@@
//:::L:z:L,;:JrJ;crIrIcFJ9FO$@@Z;rrzrJcCceCCJ9eB6BSH9Bk0G$$$$$B$B$$@@@@@@@@@$@$@@@$@@@$@$@$@@@@@$@$@@@@@@@@@@@Gj:rr$@@ZzrIcCzZJkLc;B8JL8$erZ;r,LLjCOO$@@
//z:r,r,r:L;zLz;crJLFLCJKG$$@@$rc;JLJLZcZJkZOCKk8bdKDB$8$B$D@$@$$$@@@@@@@@@@@@@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@8F;Jz8$@G6IZzIccrJrIJKZH@@jDrFZBB$#$#@$
//:r;JrJrcLJrJLz;zLFLIzZeGB@@$6CLJcFLFJeISZOKde86dOBB$0$$@$@$$$@$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#$@@@@@@@$$zc,cLZcCSBcj68IdeZjBCD@$e@@@@@@@@@$$
//bzeICzJrzrIrzrILFzeJeZBB@@@BBJjLjzjzCJeISZSK6K8kBS#H$D$$@$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@@@@@@@$G@@@@@@@@@@0BJJJZJFcCJSe$GOjOkSZ$@@z@@@@@@@$$d
//ejzJrzrJLIcCLILIcFJSeHB@@@#$KZcCJZJeJeFZI9ZHKDO080B#0@$$0@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@@@@@@@$@@@@@@@@@@@@@#BjJcILCLz;JLZCScjzjJO@@J@@@@@@@@@
//ZcCLJrILFLCcJzZzZJZC0D$@@@$BBzZJZzKzKJZJSeObG9Bd$H$$@@@$@$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@$@@@@@@@@@@@@@$$6b60bD$8LJ;zcCkdKkc6$@6@@@@@@@c
//JFzI;JLJcFLjLjJKzZJZZ$$@@@$$OKJCzSJejeJKjdCB6$G#8B8@#@$@$@@@$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@@@@@$@$@@@@@@@@@@@@@@@Bk9$k$@@@$eJ:zLjK0BBZ$K#@@Or;r
//ZLZLFLFLjcZcezejZzOjKk@@@$@#$ZSJKIejKzKzSjb6O6$H$G$$$$@$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@$@$@@@@@@@@@@@@@@@@@DOZ@d9H@@@@$Kc;LrjJSjSccrJC@@
//JFzFcZJCJFcCzZzKFCZkCO@@$@#$dGZ9IZF9CKFKIkj6ZB6BB$B$B@$@#@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@$@@@@@@@@@@@@@@@@@#OJ@@SJ0@@@@@$SzrzcILSJ9ZkeS
//ZcJzezjJZJFzZcZzZFkCde@@@B$D$kdKCJKFeI6eHZ9e66#60O$B$$@$@$@$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@@@@@@@@@@@@@@@@@$$BSJ@@@JJk@@@@@$$Jz;ILFzCZ#K
//IjcZcCcKFCJSJezeCbC996#@@$B#9OZKIZIZJKFZZdjOSGb8bBB$B$$@$@$@@@@@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@@@@@@@@@@@@@@@@@$@$GC@@@$ec$@@@@@@$8jFLjJCJj
//ZcZJCJKzZIZJeJZjOK6eDkB@@0$80ZOcKJeJZzZcbedKGkB9OKH8$D$$@#@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$@$De@@@@$J6@@@@@@$@d6FZJkc
//JjJKJZIeFKJbFkFHk9ZOBBO@@@#$OOSKZkJeCkJZzbSHeGG8OHO$d$B$$$$@$@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@$$S$@@@@6ZO@@@@@@@$BSdkK
//kcCJCcZzeJZJZICFCc6Z9SGB@$$OBeZJZLCcJcjLIzZzZISIOZ8ZHO8G$B$0$0$$@$@@@@@$@$@@@$@$@$@@@@@@@@@$@$@0@$@D@$@@@@@@@@@@@@@@@@@@@@@$@$@G6rIG@@@$OF$$@@@@@$$KGF
 
 
