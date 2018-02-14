#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0,c,d,n,i,j;
    string s1,s2,s3;
    cin>>n;
    cin>>s1;
    s2=s1;
    a++;
    for(i=1;i<n;i++)
    {
        cin>>s1;
        if(s1==s2) a++;
        else
        {
            s3=s1;
            b++;
        }

    }
    if(b>a) cout<<s3<<endl;
    else cout<<s2<<endl;
    return 0;
}
