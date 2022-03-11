
// replace Pi in 3.14

//NAZMUL ZAMAN-Bsc in (IT)
#include<bits/stdc++.h>
#include<string>
using namespace std;
void replacePi(string s)
{
    if(s.size()==0) 
    {
        return;
    }
    else if(s[0]=='p' && s[1]=='i')
    {
        cout<<3.14;
        replacePi(s.substr(2));

    }
    else {
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int_fast32_t main()
{
   replacePi("pippppipppi");
   return 0;
}