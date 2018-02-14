
#include<bits/stdc++.h>

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

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,first=0,second,q1=0,q2=0,num1=0,num2=0;
    string str1,str2;
    cin>>str1>>str2;

    n=str1.size();
    for(i=0;i<n;i++)
    {
        if(str1[i]=='1')
        {
            if(n-(i+1)-1>=0) q1+=1;
            if((n-(i+1)-1)>=0) num1+=(n-(i+1)-1);
        }
    }
    if(str1[n-1]=='1') num1++;
     n=str2.size();
    for(i=0;i<n;i++)
    {
        if(str2[i]=='1')
        {
            if(n-(i+1)-1>=0) q2+=1;
            if((n-(i+1)-1)>=0) num2+=(n-(i+1)-1);
        }
    }
    if(str2[n-1]=='1') num2++;
    if(q1==q2)
    {
        if(num1>num2) cout<<">"<<endl;
        else if(num1<num2) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }
    else if(q1>q2)   cout<<">"<<endl;
    else  cout<<"<"<<endl;

    r0;


}
