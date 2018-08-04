#include<bits/stdc++.h>

using namespace std;



int main()
{
    string str;
    char temp;
    int n;

    cin>>n>>str;

    for(int i=2;i<=100 && i<n;i++)
    {
        if(n%i==0)
        {
            for(int j=0;j<i/2;j++)
            {
                temp = str[j];
                str[j]= str[i-1-j];
                str[i-1-j]= temp;
            }
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
