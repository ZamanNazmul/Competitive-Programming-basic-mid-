
//Q:  Remove duplicate character from string.

//NAZMUL ZAMAN-Bsc in (IT)

#include<bits/stdc++.h>
#include<string>
using namespace std;
string removeDup(string s)
{
  if(s.size()==0) return " ";
   char  ch =s[0];
   string ans=removeDup(s.substr(1));
   if(ch==ans[0]){

   return  ans;
   }
   return ch+ans;

}
int32_t main()
{
   cout<<removeDup("aaabbbcccffffdddeee");

    return 0;
}
 