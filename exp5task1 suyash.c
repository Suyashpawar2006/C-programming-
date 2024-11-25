#include<stdio.h>

int factorialIterative(int num){
int i,prod = 1;
    for( i=1; i <= num; i++){
        prod *= i;
    }

    return prod;
}

int main(){
    int num;

    printf("\t\t\t *** Iterative Factorial Function *** \n\n");

    printf("Enter Number:");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorialIterative(num));

    return 0;

    }


 /*OUTPUT :-  *** Iterative Factorial Function ***

Enter Number:5
Factorial of 5 is 120
Process returned 0 (0x0)   execution time : 3.221 s
Press any key to continue. */
