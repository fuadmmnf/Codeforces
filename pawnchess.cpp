
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
	LL a,b,c,d,i,j,k,l,n,m,arr[100001],MinW=9999999999999,MinB=999999999999,Max=0,_count=0,sum=0,black=0,white=0;
    char str[100][100];
    REP(i,0,8)
    {
        cin>>str[i];
    }

    REP(i,0,8)
    {
        REP(j,0,8)
        {

            if(str[j][i]=='W')
            {
                a=0;
                b=0;
                for(k=j-1;k>=0;k--)
                {
                    if(str[k][i]!='.')
                    {
                        b=1;
                        break;
                    }
                    a++;
                }
                if(b==0 && a<MinW ) MinW=a;
            }

            else if(str[j][i]=='B')
            {
                a=0;
                b=0;
                for(k=j+1;k<8;k++)
                {
                    if(str[k][i]!='.')
                    {
                        b=1;
                        break;
                    }
                    a++;
                }
                if(b==0 && a<MinB) MinB=a;
            }
        }
    }
    if(MinB>=MinW) cout<<"A"<<endl;
    else cout<<"B"<<endl;
    return 0;
}
