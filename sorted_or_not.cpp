
// Given array sorted or not?

#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1) return true;
    bool restArry=sorted(arr+1,n-1);
     
    if(arr[0]<arr[1] && restArry);
     return true;

}

int main()
{

    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5);
    return 0;
}
