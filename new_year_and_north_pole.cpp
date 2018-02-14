
#include<bits/stdc++.h>

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
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b=0,c,d,i=0,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,south=0;
    string s;
    bool con=true;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        cin>>a>>s;
        if(south==0 && (s=="East" || s=="west"))  con=false;

        if(b && s!="North")
        {
            con=false;
        }
        else b=0;

        if(i==0 && s!="South")
        {
           con=false;
        }
        if(s=="South") south+=a;
        else if(s=="North") south-=a;
        if(south==20000) b=1;
        if(south>20000 || south<0) con=false;
        i++;
    }
    if(con && south==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
