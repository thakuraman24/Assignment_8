/*
q1
#include<stdio.h>

int main()
{
    printf("Enter number of raws\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}



Q2
#include<stdio.h>

int main()
{
    printf("Enter number of raws\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=(n+1)-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q3
#include<stdio.h>

int main()
{
    printf("Enter number of raws\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=(n+1)-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q4
#include<stdio.h>

int main()
{
    printf("Enter number of raws\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q5
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=2*n;j++)
        {

            if(n-(i-1)<=j && j<=n+(i-
                                   1))
            {

                printf("* ");

            }
            else
                printf("  ");

        }
        printf("\n");

    }

    return 0;
}


Q6
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=2*n;j++)
        {

            //if(n-(i-1)<=j && j<=n+(i-1))
            if(i<j && j<2*n-i)
            {

                printf("* ");

            }
            else
                printf("  ");

        }
        printf("\n");

    }

    return 0;
}


Q7
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=(2*n-1);j++)
        {

            if(n-(i-1)<=j && j<=n+(i-1))
            {

                printf("  ");

            }
            else
                printf("* ");

        }
        printf("\n");

    }

    return 0;
}


Q8
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=1;

        for(int j=1;j<=2*n-1;j++)
        {

            if(j==n+1)
            {
                k=k-2;
            }


            if((n+1)-i<=j && j<=(n+3)-(4-i))
            {
                if(j<=n){
                    printf("%d ",k);
                    k++;
                }
                else if(j>n){

                    printf("%d ",k);
                    k--;
                }
            }
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q9
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=1;

        for(int j=1;j<=2*n-1;j++)
        {

            if(j==n+1)
            {
                k=k-2;
            }


            if(i<=j && j<=(2*n)-i)
            {
                if(j<=n){
                    printf("%d ",k);
                    k++;
                }
                else if(j>n){

                    printf("%d ",k);
                    k--;
                }
            }
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q10
#include<stdio.h>

int main(){
    printf("Enter number of rows\n");
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int j,k=1;
        for (j = 1; j <=2*n-1; j++)
        {
            if(i==1 && j==n+1)
            {
                k=k-1;
            }
            if(j==n+1)
            {
                k=k-1;

            }
            if((n-i)+1<j && j<(i+(n-1)))
            {
                printf(" ");
            }
            else
            {
                if (j<=n)
                {
                    printf("%d",k);
                    k++;
                }
                else if (j>n)
                {
                    printf("%d",k);
                    k--;

                }



            }
        }
        printf("\n");
    }

    return 0;
}


Q11
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k='A';

        for(int j=1;j<=2*n-1;j++)
        {

            if(j==n+1)
            {
                k=k-2;
            }


            if((n+1)-i<=j && j<=(n+3)-(4-i))
            {
                if(j<=n){
                    printf("%c ",k);
                    k++;
                }
                else if(j>n){

                    printf("%c ",k);
                    k--;
                }
            }
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q12
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k='A';

        for(int j=1;j<=2*n-1;j++)
        {

            if(j==n+1)
            {
                k=k-2;
            }


            if(i<=j && j<=(2*n)-i)
            {
                if(j<=n){
                    printf("%c ",k);
                    k++;
                }
                else if(j>n){

                    printf("%c ",k);
                    k--;
                }
            }
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q13
#include<stdio.h>

int main(){
    printf("Enter number of rows\n");
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int j,k='A';
        for (j = 1; j <=2*n-1; j++)
        {
            if(i==1 && j==n+1)
            {
                k=k-1;
            }
            if(j==n+1)
            {
                k=k-1;

            }
            if((n-i)+1<j && j<(i+(n-1)))
            {
                printf("  ");
            }
            else
            {
                if (j<=n)
                {
                    printf("%c ",k);
                    k++;
                }
                else if (j>n)
                {
                    printf("%c ",k);
                    k--;

                }



            }
        }
        printf("\n");
    }

    return 0;
}


Q14
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k='A';

        for(int j=1;j<=n;j++)
        {

            if(j==i || j==1 || i==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q15
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k='A';

        for(int j=1;j<=n;j++)
        {

            if(j==n || j==(n+1)-i || i==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q16
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k='A';

        for(int j=1;j<=(2*n-1);j++)
        {

            if(j==i+n-1 || j==(n+1)-i || i==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q17
#include<stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k='A';

        for(int j=1;j<=(2*n-1);j++)
        {

            if(j==2*n-i || j==i || i==1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }

    return 0;
}


Q18
#include<stdio.h>

int main()
{
    int i;
    for( i=1;i<=9;i++)
    {
        if(i<=(9+1)/2)
        {
            for(int j=1;j<=9;j++)
            {
                if(6-i<=j && j<=i+4)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        if(i>5)
        {
            for(int j=1;j<=9;j++)
            {
                if(i-4<=j && j<=14-i)
                    printf("* ");
                else
                    printf("  ");

            }
            printf("\n");
        }

    }

    return 0;
}


Q19
#include<stdio.h>

int main()
{
    for (int i = 1; i <=5; ++i)
    {
        // upper two triangles
        if(i<=3)
        {
            for (int j = 1; j <=19; ++j)
            {
                if((4-i)<=j && j<=(i+6) || ((4-i)+9+1)<=j && j<=((i+6)+9+1))
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        // string
        if(i==4)
        {
            for (int j = 1; j <=17; ++j)
            {
                if(j==8)
                    printf("MySirG");
                else
                    printf("* ");

            }
            printf("\n");
        }
        // lower triangle
        if(i==5)
        {
            for (int k = 1; k < 10; ++k)
            {


                for (int j = 1; j <= 20; j++)
                {
                    if (k < j && j < 20 - k)
                    {
                        printf("* ");
                    }
                    else printf("  ");
                }
                printf("\n");
            }
        }

    }
    return 0;

}
*/