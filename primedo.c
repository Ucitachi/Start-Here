// Online C compiler to run C progra
#include<stdio.h>

void main()
{
    int n1,n2,i,j,flag=0;
    printf("Enter the range:");
    scanf("%d",&n1);
    scanf("%d",&n2);

    i=n1;

      do{

            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }

            }
            
           
            if(flag==0)
            {
                printf("%d is prime\n",i);

            }
            flag=0;
            i++;
            
            }while(i<=n2);
}