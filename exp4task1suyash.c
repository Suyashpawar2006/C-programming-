#include<stdio.h>
int isPrimeNumber(int num);
int isPrimeNumber(int num){
    int i;
for( i=2; i < num; i++){
    if(num % i == 0){
        return 0;
    }
}
return 1;
}

int main (){
int start_num,end_num,i;
printf("\t\t\t*** Prime Number Finder ***\n\n");
printf("Enter Starting Number:");
scanf("%d", &start_num);
printf("Enter Ending Number:");
scanf("%d", &end_num);
i= start_num<=1?2:start_num;
printf("Prime Number between %d and %d:", start_num, end_num);
while(i <= end_num){
    if(isPrimeNumber(i)){
        printf("%d,",i);

    }
    i++;
}
return 0;
}
/*
OUTPUT:
         *** Prime Number Finder ***

Enter Starting Number:2
Enter Ending Number:10
Prime Number between 2 and 10:2,3,5,7,
Process returned 0 (0x0)   execution time : 9.283 s
Press any key to continue.
*/

















