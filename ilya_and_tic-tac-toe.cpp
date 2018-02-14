
#include<bits/stdc++.h>

typedef long long LL;
/*
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;

*/
#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
/*
#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
*/
#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;


/*
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/
 char str[6][6];



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a=0,b=0,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;


    REP(i,0,4) cin>>str[i];
    REP(i,0,4)
    {
        _count=0;
        a=0;
        b=0;
        REP(j,0,3)
        {
            if(str[i][j]=='.') a=1;
            else if(str[i][j]=='x') _count++;
            else break;
            if(_count==2 && a)
            {
                cout<<"YES"<<endl;
                r0;
            }
        }
        _count=0;
         REP(j,1,4)
        {
            if(str[i][j]=='.') b=1;
            else if(str[i][j]=='x') _count++;
            else break;

            if(_count==2 && b)
            {
                cout<<"YES"<<endl;
                r0;
            }
        }
    }

    REP(i,0,4)
    {
        _count=0;
        a=0;
        b=0;
        REP(j,0,3)
        {
            if(str[j][i]=='.') a=1;
            else if(str[j][i]=='x') _count++;
            else break;
            if(_count==2 && a)
            {
                cout<<"YES"<<endl;
                r0;
            }
        }
        _count=0;
         REP(j,1,4)
        {
            if(str[j][i]=='.') b=1;
            else if(str[j][i]=='x') _count++;
            else break;
            if(_count==2 && b)
            {
                cout<<"YES"<<endl;
                r0;
            }
        }
    }

    a=0;
    b=0;
    _count=0;

    if(str[1][0]=='.') a=1;
    else if(str[1][0]=='x') _count++;
    else _count=123123;
     if(str[2][1]=='.') a=1;
    else if(str[2][1]=='x') _count++;
    else _count=113;
     if(str[3][2]=='.') a=1;
    else if(str[3][2]=='x') _count++;
    else _count=123;
    if(a && _count==2)
    {
        cout<<"YES"<<endl;
        r0;
    }


    a=0;
    b=0;
    _count=0;


   for(i=0;i<3;i++)
   {
       if(str[i][i]=='x') _count++;
       else if(str[i][i]=='.') a=1;
       else break;
        if(a==1 && _count==2)
        {
            cout<<"YES"<<endl;
            r0;
        }
   }
   a=0;
    b=0;
    _count=0;

      for(i=1;i<4;i++)
   {
       if(str[i][i]=='x') _count++;
       else if(str[i][i]=='.') a=1;
       else break;
        if(a==1 && _count==2)
        {
            cout<<"YES"<<endl;
            r0;
        }
   }




    a=0;
    b=0;
    _count=0;



    if(str[0][1]=='.') a=1;
    else if(str[0][1]=='x') _count++;
    else _count=123123;
     if(str[1][2]=='.') a=1;
    else if(str[1][2]=='x') _count++;
    else _count=113;
     if(str[2][3]=='.') a=1;
    else if(str[2][3]=='x') _count++;
    else _count=123;
    if(a && _count==2)
    {
        cout<<"YES"<<endl;
        r0;
    }











    a=0;
    b=0;
    _count=0;


    if(str[1][3]=='.') a=1;
    else if(str[1][3]=='x') _count++;
    else _count=123123;
     if(str[2][2]=='.') a=1;
    else if(str[2][2]=='x') _count++;
    else _count=113;
     if(str[3][1]=='.') a=1;
    else if(str[3][1]=='x') _count++;
    else _count=123;
    if(a && _count==2)
    {
        cout<<"YES"<<endl;
        r0;
    }


      a=0;
    b=0;
    _count=0;


    if(str[0][2]=='.') a=1;
    else if(str[0][2]=='x') _count++;
    else _count=123123;
     if(str[1][1]=='.') a=1;
    else if(str[1][1]=='x') _count++;
    else _count=113;
     if(str[2][0]=='.') a=1;
    else if(str[2][0]=='x') _count++;
    else _count=123;
    if(a && _count==2)
    {
        cout<<"YES"<<endl;
        r0;
    }

    a=0;
    _count=0;


      for(i=0;i<3;i++)
   {
       if(str[i][3-i]=='x') _count++;
       else if(str[i][3-i]=='.') a=1;
       else break;
        if(a==1 && _count==2)
        {
            cout<<"YES"<<endl;
            r0;
        }
   }
   a=0;
    b=0;
    _count=0;

      for(i=1;i<4;i++)
   {
       if(str[i][3-i]=='x') _count++;
       else if(str[i][3-i]=='.') a=1;
       else break;
        if(a==1 && _count==2)
        {
            cout<<"YES"<<endl;
            r0;
        }
   }






    cout<<"NO"<<endl;
    r0;





}
