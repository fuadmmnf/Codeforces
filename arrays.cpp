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
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));


using namespace std;

LL arr1[100001];
LL arr2[100001];


int main()
{
    LL a,b,c,d,i,j,n,m,k,l;

    cin>>n>>m;
    cin>>a>>b;
    REP(i,0,n) cin>>arr1[i];
    REP(i,0,m) cin>>arr2[i];
    c=arr1[a-1];
    d=arr2[m-b];
    if(d>c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




	return 0;
}
