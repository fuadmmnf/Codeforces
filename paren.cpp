# include<bits/stdc++.h>
# define MAX_SIZE 100

using namespace std;

void _printParenthesis(int pos,int n,int open,int close)
{
    static char str[MAX_SIZE];
    if(close==n)
    {
        cout<<str<<endl;
        return ;
    }
    else
    {
        if(open>close)
        {
            str[pos]=')';
            _printParenthesis(pos+1,n,open,close+1);
        }
        if(open<n)
        {
            str[pos]='(';
            _printParenthesis(pos+1,n,open+1,close);
        }
    }
}

void printParenthesis(int n)
{
    if(n > 0)
        _printParenthesis(0, n, 0, 0);
    return;
}


// Driver program to test above functions
int main()
{
    int n;
    cin>>n;
    printParenthesis(n);
    getchar();
    return 0;
}
