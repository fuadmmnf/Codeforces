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
    LL a,b,c,d,i,j,k,l;
    cin>>a>>b>>c>>d;
    k=max(3*(a/10),a-((a*c)/250));
    l=max(3*(b/10),b-((b*d)/250));
    if(k==l) cout<<"Tie"<<endl;
    else if(k>l) cout<<"Misha"<<endl;
    else cout<<"Vasya"<<endl;
    return 0;
}
