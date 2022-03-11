// reverse string in recursive 
//NAZMUL ZAMAN-Bsc in (IT)
#include<bits/stdc++.h>
#include<string>
using namespace std;
void reverse(string s)
{
    if(s.size()==0) 
    {
        return;
    }
    string restString =s.substr(1);
    reverse(restString);
    cout<<s[0];
}
int main()
{
    cout<<"nazmul"<<"\n";  
    reverse("nazmul");
}