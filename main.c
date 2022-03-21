#include <stdio.h>

int main(void)
{
    int i,j,rows,colon,v[10][10];
	float Sum;
	int c;

    printf("Vendos i,j:");
    scanf("%d %d",&i,&j);
    
        printf("Vendos vendos numrat: \n");
    for(rows=0;rows<i;rows++)
    {
               for(colon=0;colon<j;colon++)
               {
                   printf("Vendos vleren ne matricat v[%d][%d]:",rows,colon);
                   scanf("%d",&v[rows][colon]);
               }
    }
    
     printf("Matrica eshte:\n");
    for(rows = 0; rows < i; rows++)
    {
            for(colon=0;colon<j;colon++)
        {
            printf("%d\t",v[rows][colon]);
        }
        printf("\n");
    }
    
    for(rows = 0; rows < i; rows++)
    {
            Sum=0;
            for(colon=0;colon<j;colon++)
            {
                Sum=Sum + v[rows][colon];
            }
        printf("Mesatrja e cdo sudenti eshte :  %0.2f \n", Sum/3 );

    }
    
    for(rows = 0; rows < i; rows++)
    {
            c=0;
            for(colon=0;colon<j;colon++)
            {
                c=c + v[colon][rows];
            }
        printf("shuma eshte :  %d \n", c );

    }
     
     return 0;
    
}
    
    

