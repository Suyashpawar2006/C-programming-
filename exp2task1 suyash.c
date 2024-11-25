#include<stdio.h>
int main()
{ int n;
printf("\t\t\t***Even Odd Finder***\n\n\n");
printf("Enter number: ");
scanf("%d",&n);
if(n%2==0){
    printf("%d is Even",n);
}else{
     printf("%d is Odd",n);
}
return 0; }
