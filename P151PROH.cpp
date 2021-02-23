#include <iostream>
using namespace std;
 
int check = 0;
void find_magic (string s){
    int len = s.length();
    string S1="", S2="", S3="";
    if (len >= 1) S1 = S1 + s[0];
    if (len >= 2) S2 = S2 + s[0] + s[1];
    if (len >= 3) S3 = S3 + s[0] + s[1] + s[2];
    if (S1 == "1" && s.length()>=1){
        if (len == 1){
            check = 1;
            return;
        }
        else find_magic (s.substr(1, s.length()-1));
    }
    if (S2 == "14" && len>=2)
    {
        if (len == 2)
        {
            check = 1;
            return;
        }
        else find_magic (s.substr(2, s.length()-2));
    }
    if (S3 == "144" && len>=3)
    {
        if (len == 3)
        {
            check = 1;
            return;
        }
        else find_magic (s.substr(3, s.length()-3));
    }
    return;
}
 
int main ()
{
    string s;
    cin>>s;
    find_magic (s);
    if (check == 1) cout<<"YES";
    else cout<<"NO";
    return 0;
} 
