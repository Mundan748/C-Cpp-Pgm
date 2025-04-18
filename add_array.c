#include<stdio.h>
#include<conio.h>
int c[3][3];
void main()
{
 int i,j,a[3][3]={10,20,30,40,50,60,70,80,90};
 int b[3][3]={90,80,70,60,50,40,30,20,10};
 clrscr();
printf("matrix first is :\n");
 for(i=0;i<3;i++){
     for(j=0;j<3;j++){
	 printf("%d\t",a[i][j]);
	}
     printf("\n");
    }
    printf("matrix second is:\n");
    for(i=0;i<3;i++){
     for(j=0;j<3;j++){
	 printf("%d\t",b[i][j]);
  c[i][j]=a[i][j]+b[i][j];
	}
     printf("\n");
    }
    printf("addition of two matrix is: \n");
 for(i=0;i<3;i++){
     for(j=0;j<3;j++){
	 printf("%d\t",c[i][j]);
	}
     printf("\n");
    }
 getch();
}