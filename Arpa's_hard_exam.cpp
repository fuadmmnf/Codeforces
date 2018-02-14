#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,n;
   cin>>n;
    if(n==0) a=1;
    else if(n%4==0) a=6;
    else if(n%4==2) a=4;
    else if(n%4==3) a=2;
    else a=8;

    cout<<a<<endl;
    return 0;
}

