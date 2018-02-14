#include<stdio.h>
int main()
{
    int moves,i,j,row,column,matrix[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {
                row=i+1;
                column=j+1;
            }
        }
    }

    row=row-3;
    column=column-3;
    if(row<0) row=-row;
    if(column<0) column=-column;

    moves=row+column;

    printf("%d",moves);
    return 0;
}
