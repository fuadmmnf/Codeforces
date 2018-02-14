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

LL a,b,c,d,i,j,k,l,n,m,arr[100002];



using namespace std;


void init()
{
    cin>>n;
    REP(i,0,n) cin>>arr[i];

}





int main()
{

    cin>>n;
    REP(i,0,n)
    {
        c=1;
        cin>>a;
        arr[i]=(a*(a+1))/2;
        for(j=2;j<=a;j*=2)
        {
            c+=j;
        }
        arr[i]-=2*c;
    }
    REP(i,0,n)
    {
        cout<<arr[i]<<endl;
    }

    return 0;

}
