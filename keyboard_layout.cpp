#include<bits/stdc++.h>
#include<string>
#include<string.h>
#include<stdlib.h>


typedef long long LL;

#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)

using namespace std;
map <char,char> key1;
map<char,char> key2;

int main()
{
	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    char str1[30],str2[30],text[100003],ch;
    cin>>str1>>str2>>text;
    REP(i,0,26)
    {
        key1[str1[i]]=str2[i];
        key2[toupper(str1[i])]=toupper(str2[i]);
    }
    n=strlen(text);
    REP(i,0,n)
    {
        if(text[i]>='0' && text[i]<='9') cout<<text[i];
        else if(text[i]>='A' && text[i]<='Z')
        {


            cout<<key2[text[i]];

        }
        else cout<<key1[text[i]];
    }
    cout<<endl;
    return 0;
}
