#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&r2,&c2);
    int b[r2][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        int c[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            { 
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                if(j==0)
                {
                    printf("%d",c[i][j]);
                }
            else
            {
                printf(" %d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}

