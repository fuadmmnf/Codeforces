#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,i,j;
    cin>>a;
    cin>>b;
    int arr[a];
    d=1;
    for(i=0;i<a;i++)
        cin>>arr[i];
    for(i=1;i<a;i++)
    {
        if(arr[i]-arr[i-1]>b) d=1;
        else d++;
    }
    cout<<d<<endl;
    return 0;
}
