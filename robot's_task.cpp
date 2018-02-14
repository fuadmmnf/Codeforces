
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
	int a=0,b=0,c=0,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    bool all[100001];
    setarr(all,false);

    cin>>n;
    REP(i,0,n) cin>>arr[i];

    while(true)
    {
        REP(i,0,n)
        {
            if(arr[i]<=a && all[i]==false)
            {
                all[i]=true;
                a++;
            }
        }

        REP(i,0,n)
        {
            b=0;
            if(all[i]==false)
            {
                b=1;
                break;

            }

        }
         if(!b)
            {
                cout<<c<<endl;
                return 0;
            }
        c++;
       for(i=n-1;i>=0;i--)
       {
           if(all[i]==false)
           {
               if(arr[i]<=a)
               {
                   all[i]=true;
                   a++;
               }

           }
       }

       REP(i,0,n)
        {
            b=0;
            if(all[i]==false)
            {
                b=1;
                break;

            }

        }
         if(!b)
            {
                cout<<c<<endl;
                return 0;
            }
        c++;
    }

}
