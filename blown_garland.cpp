#include<bits/stdc++.h>
#include<string>
#include<string.h>



typedef long long LL;
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)

#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));

using namespace std;

char str[200];




int det(char ch)
{
    int a,b,c,d=0,i,j,k,l,n;
    n=strlen(str);
    REP(i,0,n)
    {
        if(str[i]==ch)
        {
            a=(i%4);
            break;
        }
    }
    for(i=a;i<n;i+=4)
    {
        if(str[i]=='!') d++;
    }
    return d;
}



int main()
{


    cin>>str;

    cout<<det('R')<<" "<<det('B')<<" "<<det('Y')<<" "<<det('G')<<endl;
    return 0;
}
