
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
	LL a,b,c,d,i,j,k,l,n,m,Max=0;
    char str[1000004],ch='a';
    char res[1000004];
    setarr(res,'0');
    cin>>n;
    while(n--)
    {

        cin>>str;
        a=strlen(str);
        cin>>b;
        REP(i,0,b)
        {
            d=0;
            cin>>c;
            if(Max<c+a-1) Max=c+a-1;
            REP(i,c-1,c+a-1)
                res[i]=str[d++];

        }
    }

    for(i=0;i<Max;i++)
        {
            if(res[i]=='0') cout<<ch;
                else
            {
                cout<<res[i];

            }
        }
    cout<<endl;
    return 0;



}
