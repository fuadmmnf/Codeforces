
#include<bits/stdc++.h>
using namespace std;

#define LL long long
LL arr[100001][2];
int main()
{
	std::ios_base::sync_with_stdio(false);
	LL a,b,c,d,e,f,i,j,k,l,n,m;
	char str[100005];
	cin>>str;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for(i=0;i<n;i++)
    {
        for(j=arr[i][0]-1;j<arr[i][1]-1;j++)
        {
            if(str[j]==str[j+1])
            {
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}

