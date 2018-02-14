#include<bits/stdc++.h>
#include<string>

typedef long long LL;
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
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
    bool perm[200];
    setarr(perm,0);
    LL a,b,c,d,i,j,k,l,n,m,arr[200];
    cin>>n>>m;
    for(i=0;i<m;i++)
        cin>>arr[i];
    for(i=0;i<m-1;i++)
    {
        a=arr[i];
        perm[arr[i+1]-arr[i]]=true;
        a+=(arr[i+1]-arr[i]);
        a%=4;

           cout<<endl;
           return 0;
        }
    }
    cout<<"-1"<<endl;

	return 0;
}
