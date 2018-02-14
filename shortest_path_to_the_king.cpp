
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
    int a,b,c,d,i=0,j,k,l,n,m,Min=0,arr[20001];
    char pos1[3],pos2[3];
    cin>>pos1;
    cin>>pos2;

    while(strcmp(pos1,pos2))
    {
        if(pos1[0]==pos2[0] && pos2[1]!=pos1[1])
        {

            Min+=abs((pos2[1]-pos1[1]));
            if(pos1[1]>pos2[1])            {
                REP(j,0,pos1[1]-pos2[1])
                    arr[i++]=8;
            }
            else
            {
                 REP(j,0,pos2[1]-pos1[1])
                    arr[i++]=6;
            }
             pos1[1]=pos2[1];


        }


        else if(pos1[0]!=pos2[0] && pos2[1]==pos1[1])
        {

            Min+=abs((pos2[0]-pos1[0]));
            if(pos1[0]>pos2[0])            {
                REP(j,0,pos1[0]-pos2[0])
                    arr[i++]=5;
            }
            else
            {
                 REP(j,0,pos2[0]-pos1[0])
                    arr[i++]=7;
            }
            pos1[0]=pos2[0];

        }

        else if(pos1[0]<pos2[0])
        {

            if(pos1[1]<pos2[1])
            {
                b=min(pos2[1]-pos1[1],pos2[0]-pos1[0]);
                REP(j,0,b)
                {
                    arr[i++]=2;
                    pos1[1]++;
                    pos1[0]++;

                }
                Min+=b;

            }
            else
            {

                b=min(pos1[1]-pos2[1],pos2[0]-pos1[0]);
                REP(j,0,b)
                {
                    arr[i++]=3;
                    pos1[1]--;
                    pos1[0]++;
                }
                Min+=b;
            }
        }
        else if(pos1[0]>pos2[0])
        {
            if(pos1[1]<pos2[1])
            {
                b=min(pos2[1]-pos1[1],pos1[0]-pos2[0]);
                REP(j,0,b)
                {
                    arr[i++]=1;
                    pos1[1]++;
                    pos1[0]--;

                }
                Min+=b;

            }
            else
            {

                b=min(pos1[1]-pos2[1],pos1[0]-pos2[0]);
                REP(j,0,b)
                {
                    arr[i++]=4;
                    pos1[1]--;
                    pos1[0]--;
                }
                Min+=b;
            }
        }




    }
    cout<<Min<<endl;
    REP(j,0,i)
    {
        if(arr[j]==1) cout<<"LU"<<endl;
        else if(arr[j]==2) cout<<"RU"<<endl;
        else if(arr[j]==3) cout<<"RD"<<endl;
        else if(arr[j]==4) cout<<"LD"<<endl;
        else if(arr[j]==5) cout<<"L"<<endl;
        else if(arr[j]==6) cout<<"U"<<endl;
        else if(arr[j]==7) cout<<"R"<<endl;
        else cout<<"D"<<endl;
     }
    return 0;

}
