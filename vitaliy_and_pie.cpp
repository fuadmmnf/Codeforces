
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
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,arr[30],Min=9999999999999,Max=0,_count=0,sum=0;
    string str;
    setarr(arr,0);
    cin>>n;
    cin>>str;
    REP(i,0,2*n-2)
    {
        if(i%2==0)
        {
            arr[str[i]%97]++;
        }
        else
        {
            if(arr[(str[i]+32)%97])
            {
                arr[(str[i]+32)%97]--;
            }
            else _count++;
        }
    }
    cout<<_count<<endl;
    return 0;

}
