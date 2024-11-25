/*Aim : WAP to find the length of a string without using library function.
Name : suyash pawar
Roll no : 17
UIN : 241A008
Division : A*/
#include<stdio.h>
int main()
{
    char str[100];
    int length=0;   //variable
    printf("\t\t*** String Length Finder ***\n\n\n");
    printf("Enter Your String : ");
    gets(str);

    while(str[length] !='\0')
    {
        length++;

    }

    printf("string length: %d Characters",length);
    return 0;
}
