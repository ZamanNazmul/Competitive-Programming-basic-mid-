
// passing by value so there no change 

#include<bits/stdc++.h>
using namespace std;

void swap (int* a,int* b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2;
    int b=3;
    // this time we just sent the address of a&b, by pointer bcz of arr pointer can change value and address or modified

    int* aptr=&a; // address of a
    int* bptr=&b; // address of b

    swap(aptr,bptr);

    cout<< a <<" "<< b <<endl;
    return 0;
}