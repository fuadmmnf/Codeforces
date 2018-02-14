#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL arr[100003];
bool T[1000001];
#define MAX 1000000
int main()
{
    LL a,b,c,d=0,i,j,k,l,n;
    cin>>n;
    T[0]=T[1]=false;
    for(i=2;i<=MAX;i++) T[i]=true;


    for(i=2;i*i<=MAX;i++)
    {
        if(T[i])
        {
            for(j=i*2;j<=MAX;j+=i)
                T[j]=false;
        }
    }


    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        a=floor(sqrt(arr[i]));
        if(T[a] && a*a==arr[i]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
