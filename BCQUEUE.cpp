#include <iostream>
using namespace std;
struct queue {
    int front;
    int back;
    long node[1003];
};
struct queue q;
 
void khoitao () {
    q.back=0;
    q.front=0;
}
 
int size () {
    return q.back-q.front;
}
 
int empty () {
    if (size()==0) return 1;
    else return 0;
}
 
void push (long a) {
    q.node[q.back]=a;
    q.back++;
}
 
void pop () {
    if (empty ()!=1) {
        q.front++;
    }
}
 
long front () {
    if (empty()==1) return -1;
    else return q.node[q.front];
}
 
long final () {
    if (empty()==1) return -1;
    else return q.node[q.back-1];
}
 
int main () {
    khoitao ();
    int t;
    cin>>t;
   
    int tv;
    long x;
    for (int i=1; i<=t; i++) {
        cin>>tv;
        if (tv==1) cout<<size()<<endl;
        if (tv==2) {
            if (empty ()==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
        if (tv==3) {
            cin>>x;
            push(x);
        }
        if (tv==4) pop ();
        if (tv==5) cout<<front()<<endl;
        if (tv==6) cout<<final()<<endl;
    }
   
    return 0;
} 
