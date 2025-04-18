#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int a[3][3]= {{10,20,30},{40,50,40},{30,20,10}};
    
        printf("matrix is :\n");
        for(i=0; i<3; i++)
   {

    for(j=0; j<3; j++)

    {
        printf("%d\t",a[i][j]);
    }

    printf("\n\n");
}
return 0;
}