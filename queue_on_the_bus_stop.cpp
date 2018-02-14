
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
    queue<int> bus;
    LL a,b,c,d,i,j,k,l,n,m,num=1;
    cin>>n>>m;
    REP(i,0,n)
    {
        cin>>a;
        bus.push(a);
    }
    b=m;
    while(bus.empty()==false)
    {

        if(bus.front()<=b)
        {
            b-=bus.front();
            bus.pop();
        }
        else
        {
            b=m;
            num++;
        }
    }
    cout<<num<<endl;
    return 0;
}
