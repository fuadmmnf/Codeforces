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
	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,len;
    char str[29];
    cin>>str;
    len=strlen(str);

    REP(i,0,len/2)
    {

        if(str[i]!=str[len-1-i]) _count++;
        if(_count!=1) a=0;
    }
     if(len%2==1 && _count==0) a=1;
    if(a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
