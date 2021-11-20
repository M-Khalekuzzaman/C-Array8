#include<stdio.h>
int main()
{
    int A[3][4];
    int B[3][4];
   printf("Enter elements for A matrix :");
   printf("\n");
    for(int i =0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            printf("A[%d][%d]  :  ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     for(int i =0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            printf(" %d ",A[i][j]);

        }
        printf("\n");
    }

    printf("\n");
    printf("Enter elements for B matrix :");

    for(int k =0 ; k<3 ; k++)
    {
        for(int l = 0 ; l<4 ; l++)
        {
            printf("B[%d][%d]  :  ",k,l);
            scanf("%d",&B[k][l]);
        }
        printf("\n");
    }

     for(int i =0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            printf(" %d ",B[i][j]);

        }
        printf("\n");
    }
    int C[3][4];
    for(int i = 0  ; i<3 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
           C[i][j] = A[i][j] + B[i][j];
        }
    }

     for(int i = 0  ; i<3 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            printf("C : \t");
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    getch();
}
