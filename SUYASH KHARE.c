#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        if(i%2==0)
            printf(" *");
            else if((i==1&&j==0))
               printf(" *");
            else if(i==3 && j==4)
            printf(" *");
            else
            printf("  ");

        }

            printf("\t");


    printf("\n");
}
printf("\n");

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(j==0 || j==4)
            printf(" *");
            else if(i==4)
                printf(" *");

        else
            printf("  ");
    }
    printf("\n");
}
printf("\n");

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if((i+j)==4)
            printf(" *");
            else if((i==j)&&(i<=2))
                printf(" *");
            else
                printf("  ");
    }
    printf("\n");
}
printf("\n");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(j==0 || j==4)
            printf(" *");
            else if(i==2 || i==0)
                printf(" *");

        else
            printf("  ");
    }
    printf("\n");
}
printf("\n");
   for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        if(i%2==0)
            printf(" *");
            else if((i==1&&j==0))
               printf(" *");
            else if(i==3 && j==4)
            printf(" *");
            else
            printf("  ");

        }

    printf("\n");
}
printf("\n");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(j==0 || j==4)
            printf(" *");
            else if(i==2)
                printf(" *");

        else
            printf("  ");
    }
    printf("\n");
}
printf("\n");
printf("-------------------------------------------------");
printf("\n");
printf("\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==0)
                printf(" *");
            else if(i+j==2)
                printf(" *");
                else if((i==3 && j==1)||(i==4 && j==2))
                    printf(" *");


            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==0 || j==4)
                printf(" *");
                else if(i==2)
                    printf(" *");
                else
                    printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(j==0 || j==4)
            printf(" *");
            else if(i==2 || i==0)
                printf(" *");

        else
            printf("  ");
    }
    printf("\n");
}
printf("\n");
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(i==0 || i==2 ||j==0)
            printf(" *");
            else if(j==4 && i<3)
                printf(" *");
                 else if((i==3 && j==1)||(i==4 && j==2))
                    printf(" *");

            else
            printf("  ");
       }
       printf("\n");
   }
   printf("\n");
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(j==0 || i==0 || i==4 || i==2)
            printf(" *");
           else
            printf("  ");
       }
       printf("\n");
   }
}



