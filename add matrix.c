#include<stdio.h>
#include<stdlib.h>

long int* solution( long int *A1,long int *A2,long int M,long int N)
{
    long int i,j;
    long int *R=(long int *)malloc(M*N*sizeof(long int));
    for(i=0;i<M;i++)
    {
            for(j=0;j<N;j++)
            {
                *(R+i*N+j)=*(A1+i*N+j)+*(A2+i*N+j);
            }
    }
    return R;
}

int main()
{
   long int i, j, M, N, *A1, *A2, *R;
    scanf("%ld",&M);
    scanf("%ld",&N);
     A1 = (long int *) malloc(M * N *sizeof(long int));
        for(i = 0; i < M; i++)
            for(j = 0; j < N; j++)
                scanf("%ld",(A1 + i * N + j));
    
     A2 = (long int *) malloc(M * N * sizeof(long int));
        for(i = 0; i < M; i++)
            for(j = 0; j < N; j++)
                scanf("%ld",(A2 + i * N + j));
    
    R = solution(A1, A2, M, N);
    for(i = 0; i < M; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(j == N-1)
                {
                    printf("%ld", *(R + i * N + j));
                }
                else
                {
                    printf("%ld ", *(R + i * N + j));
                }
            }
            if(i<M-1)
                printf("\n");
        }
    free(A1);
    free(A2);
    free(R);
    return 0;
}
