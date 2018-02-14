
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
    int a,b,c,e,f,g,d,i,j,k,l,n,m,Min=999999999999,sum=0,digit[5];
    int arr[200];
    setarr(arr,0);
    bool fact[200];
    setarr(fact,false);


    REP(i,0,5)
    {
        cin>>digit[i];
        sum+=digit[i];
        arr[digit[i]]++;
        if(arr[digit[i]]>=2) fact[digit[i]]=true;
    }
    Min=sum;

    REP(i,1,101)
    {
        a=sum;
        if(fact[i]==true)
        {
            if(arr[i]==2) a-=(i*2);
            else a-=(i*3);
        }
        if(a<Min) Min=a;
    }
    cout<<Min<<endl;
    return 0;


}
