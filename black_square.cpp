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
	int a,b,c,d=0,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,top=999,bottom=0,leftmax=999,rightmax=0;
    char str[200][200];


    cin>>n>>m;
    REP(i,0,n)
    {
        cin>>str[i];
        REP(j,0,m)
        {
            if(str[i][j]=='B') d=1;
            if(str[i][j]=='B' && i<top) top=i;
            if(str[i][j]=='B' && i>bottom)  bottom=i;
            if(str[i][j]=='B' && j<leftmax) leftmax=j;
            if(str[i][j]=='B' && j>rightmax) rightmax=j;
        }
    }
    a=bottom-top;
    b=rightmax-leftmax;
    c=max(a,b);
    if(!d)
    {
        cout<<"1"<<endl;
        return 0;
    }
    if(c+1>n || c+1>m || c>100)
    {
        cout<<"-1"<<endl;
        return 0;

    }
    else
    {
        REP(i,top,top+c+1)
        {
          for(j=rightmax;j>=rightmax-c;j--)
          {
              if(str[i][j]=='W') _count++;

          }
        }
    }
    cout<<_count<<endl;
    return 0;
}
