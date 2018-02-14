
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
bool used[100002];
int main()
{
	LL a,b,c,d,i,j,k,l,n,m,arr[100001],arr1[100002],Min=9999999999999,Max=0,_count=0,sum=0,pos,time=0;
    cin>>a>>b>>pos;
    setarr(used,false);
    REP(i,0,a)
    {
        cin>>arr[i];
    }
    REP(i,0,b)
        cin>>arr1[i];

    sort(arr,arr+a);
    sort(arr1,arr1+b);
    REP(i,0,a)
    {
        Min=99999999999999;
        REP(j,0,b)
        {
            if(used[j]==false){
                c=abs(arr[i]-arr1[j])+abs(arr1[j]-pos);
                if(c<Min)
                {
                    Min=c;
                    l=j;
                }

            }
        }
        used[l]=true;
        if(Min>time) time=Min;
    }
    cout<<time<<endl;
    return 0;
}
