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

    int a,b=1,c,d,i,j,k,l,n,m,_count=0,diff=0,same=0;
    char str1[100004],str2[100004],res[100003];
    cin>>str1;
    cin>>str2;

    a=strlen(str1);
    REP(i,0,a)
    {
        if(str1[i]!=str2[i]) diff++;
        else same++;
    }

    if(!strcmp(str1,str2))
    {
        cout<<str1<<endl;
        return 0;
    }
     if(diff%2==1)
     {
         cout<<"impossible"<<endl;
         return 0;
     }
     else
     {
         REP(i,0,a)
         {
              if(str1[i]==str2[i]) cout<<str1[i];
             else
             {
                 if(b<=diff/2)
                 {
                     cout<<str1[i];
                     b++;
                 }
                 else
                 {
                     cout<<str2[i];
                     b++;
                 }
             }
         }

         cout<<endl;
     }
     return 0;
}
