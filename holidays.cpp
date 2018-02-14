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

LL a,b,c,d,i,j,k,l,n,m,arr[100002];
bool fact[400001];



using namespace std;


void init()
{
    cin>>n;
    REP(i,0,n) cin>>arr[i];
}


int main()
{

    LL minday,maxday;
    cin>>n;
    minday=(n/7)*2;

    a=minday;
    if(n%7>5) minday+=7-(n%7);
    maxday=a;
    if(n%7<=2) maxday+=(n%7);
    else maxday+=2;


    cout<<minday<<" "<<maxday<<endl;








	return 0;
}
