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

int main()
{
    LL a=1,b,c,d,i,j,k,l,n,m;
    char str[20];
    cin>>str;
    n=strlen(str);

    REP(i,0,n)
    {
        if((str[i]=='4' && (i-1<0 || str[i-1]!='1'))||(str[i]!='1'&& str[i]!='4'))
        {
            if(str[i]=='4' && str[i-1]=='4' && str[i-2]=='1' && i-2>=0) continue;
            a=0;
            break;
        }

    }
    if(a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
