#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#define pi acos(-1)
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l,n,m,sum=0;
    cin>>a>>b;
    int arr[a];
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    if(b<sum+(a-1)*10) cout<<"-1"<<endl;
    else
    {
        cout<<(b-sum)/5<<endl;
    }
    return 0;
}
