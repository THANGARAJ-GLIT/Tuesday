#include<stdio.h>
#include<conio.h>
int main() {
   int reminder, sum=0, i, originalNum;
    printf(" enter number: ");
    scanf("%d",&originalNum);
    for (i = 1; i <= originalNum/2; i++)
        {
            reminder = originalNum % i;
	        if (reminder == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == originalNum)
            printf("given no. is perfect number");
        else
            printf("given no. is not a perfect number");
    getch();
}
