#include<stdio.h>  
#include<math.h>
int length(int a);
 int main()    
{    
int n,r,sum=0,temp,a;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;
a= length(n);    
while(n>0)    
{    
r=n%10;    
sum=sum+(pow(r,a));    
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
int length (int a){
   int count=0;
   while(a>0){
         a /= 10;
         count++;
        }
        return count;
        }