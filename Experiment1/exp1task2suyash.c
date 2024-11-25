/*
Aim: WAP to get students PCM marks from the user and find the average. Use conditional operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
*/

#include<stdio.h>
int main ()
{ int p,c,m,avg;
    printf("Enter Physics Marks:");
    scanf("%d",&p);
    printf("Enter chemistry marks:");
    scanf("%d",&c);
    printf("Enter Math Marks:");
    scanf("%d",&m);
    avg=(p+c+m)/3;
    printf("average=%d\n",avg);
    avg>=50?printf("you are eligible for admission"):printf("you are not eligible for admission");
    return 0;

}


/*Expected Output-1:
Enter Physics Marks: 45
Enter Chemistry Marks: 56
Enter Maths Marks: 78
PCM Average = 59
You are Eligible for Admission

Expected Output-2:
Enter Physics Marks: 40
Enter Chemistry Marks: 45
Enter Maths Marks: 47
PCM Average = 44
You are NOT Eligible for Admission*/
