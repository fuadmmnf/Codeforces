#include<bits/stdc++.h>

using namespace std;


int main()
{
	

	int a,b,c,d,e,f,s,i,j,k,l,n,m,arr[100001][2],Min=9999999999999,Max=0,_count=0,sum=0,sum1=0;
    cin>>n;
    int odd,odd1=0,odd2=0;
    REP(i,0,n)
    {
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]%2==1) odd1++;
        if(arr[i][1]%2==1) odd2++;
        sum+=arr[i][0];
        sum1+=arr[i][1];

    }
    if(sum%2==0 && sum1%2==0)
    {
        cout<<0<<endl;
        return 0;
    }
    bool done=false;
    for(i=0;i<n;i++)
    {
        a=0,b=0;
        if((arr[i][0]%2==0 && arr[i][1]%2==1) || (arr[i][1]%2==0 && arr[i][0]%2==1))
        {
            a=arr[i][0];
            b=arr[i][1];
        }
        if((sum+b-a)%2==0 && (sum1+a-b)%2==0)
        {
             done=true;
             break;
        }

    }
    if(done) cout<<1<<endl;
    else cout<<-1<<endl;



    return 0;
}
