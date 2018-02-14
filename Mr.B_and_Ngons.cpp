
#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l,n,m,sum=0,days=0,angle;
    cin>>n>>a;
    angle=(n-2)*180;
    b=angle/n;
    c=b/(n/2);
    if(abs(b-a)>abs(c-a)) cout<<"1 3 2"<<endl;
    else cout<<"1 2 3"<<endl;


    return 0;
}
