#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);

    LL a,b,c,d=0,i,j,k,n,m,arr[200][200],pos[200]={0},city,candid;
    cin>>candid>>city;
    for(i=0;i<city;i++)
    {
        for(j=0;j<candid;j++)
            cin>>arr[i][j];
    }


    for(i=0;i<city;i++)
    {
        a=*(max_element(arr[i],arr[i]+candid));
        for(j=0;j<candid;j++)
        {
            if(arr[i][j]==a)
            {
                pos[j]++;

                break;
            }
        }
    }

    b=*(max_element(pos,pos+city));
    for(i=0;i<city;i++)
    {
        if(pos[i]==b)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }




    return 0;

}
