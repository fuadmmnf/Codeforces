#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,m,c,d=0,i,j,k,l,arr[2000],arr1[1003]={};
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];

    for(i=0;i<n;i++) arr1[arr[i]-1]++;
    a=*max_element(arr1,arr1+1003);
    for(i=0;i<1003;i++)
        if(arr1[i]!=0) d++;

    cout<<a<<" "<<d<<endl;
    return 0;

}
