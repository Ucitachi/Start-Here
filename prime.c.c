#include<stdio.h>
void main()
{
    int n1,n2,flag=0,i,j;

    printf("Enter n1,n2 value:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("The prime numbers are:");

    for(i=n1;i<=n2;i++)
      {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag!= 1)
        {
            printf("%d\t",i);

        }
        flag=0;

      }

}

