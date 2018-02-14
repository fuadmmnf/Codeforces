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
    cin>>a>>b>>c;

    if(b/2>0 && c/4>0)
    {
        while(a>0)
        {
            if(a*2<=b && a*4<=c)
            {
                cout<<7*a<<endl;
                return 0;
            }
            a--;
        }
    }
    cout<<"0"<<endl;
    return 0;

}
