#include<stdio.h>
int main(){
    char ch;
    FILE *ptr,*ptr2;
    ptr2=fopen("stack.c","r");
    ptr=fopen("file.txt","w");
    while (ch!=EOF)
    {
        ch=fgetc(ptr2);
        fputc(ch,ptr);
    }
    fclose(ptr2);
    fclose(ptr);
    return 0;
}