/*5.QF11. Write a C program to print all perfect numbers between given interval using functions.*/

#include <stdio.h>

int checkPerfect (int);

int main(){
    int i, lowlim, uplim;
    printf("Enter the lowerlimit: ");
    scanf("%d", &lowlim);
    printf("Enter the upperlimit: ");
    scanf("%d", &uplim);
    printf("All perfect numbers between %d and %d are: ", lowlim, uplim);
    for (i = lowlim; i < uplim; i++){
        if (checkPerfect(i) == 1)
            printf("%d, ", i);
    }
    printf("\n");
    return 0;
}

int checkPerfect (int num){
    int j, sum = 0;
    for (j = 1; j < num; j++){
        if (num % j == 0)
            sum += j;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
