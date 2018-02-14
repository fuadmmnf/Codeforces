#include<string>
#include<bits/stdc++.h>
using namespace std;

#define LL long long
map <std::string,std::string> my_map;
int main()
{
	std::ios_base::sync_with_stdio(false);

	LL a,b,c,i,j,k,n,m;
	string first,second,finalstr;
	cin>>n>>m;
	for(i=0;i<m;i++)
    {
        cin>>first;
        cin>>second;
        if(first.length()<=second.length())
        {
            my_map[second]=first;
            my_map[first]=first;
        }
        else
        {
            my_map[first]=second;
            my_map[second]=second;
        }

    }
    for(i=0;i<n;i++)
    {
        cin>>first;
        finalstr+=(my_map[first]+" ");
    }
    cout<<finalstr<<endl;
    return 0;

}

