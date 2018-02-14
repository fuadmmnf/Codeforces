#include<bits/stdc++.h>
#include<string.h>



typedef long long LL;

#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)


#define setarr(arr,val) memset(arr,val,sizeof(arr));

using namespace std;

int main()
{
    LL a,b,c,d,i,j,k,l,n,m,arr[100],Min=99999999,Max=0,_count=0,sum=0,len;
    char str[100010];
    cin>>str;
    setarr(arr,0);
    len=strlen(str);
    REP(i,0,len)
    {
        if(str[i]=='B') arr[0]++;
        else if(str[i]=='u') arr[1]++;
        else if(str[i]=='l') arr[2]++;
        else if(str[i]=='b') arr[3]++;
        else if(str[i]=='a')  arr[4]++;
        else if(str[i]=='s') arr[5]++;
        else if(str[i]=='r') arr[6]++;
    }
    arr[1]/=2;
    arr[4]/=2;
    c=*min_element(arr,arr+7);

    cout<<c<<endl;
    return 0;
}
