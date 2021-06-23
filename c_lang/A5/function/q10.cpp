/*5.QF10. Write a C program to print all Armstrong numbers between given interval using functions.*/

#include <stdio.h>
#include <math.h>
int checkArm (int);

int main(){
    int lowlim, uplim, i;
    printf("Enter lowerlimit digit: ");
    scanf("%d", &lowlim);
    printf("Enter upperlimit digit: ");
    scanf("%d", &uplim);
    printf("All armstrong numbers between %d and %d are: ", lowlim, uplim);
    for (i = lowlim; i < uplim; i++){
        if (checkArm(i) == 1)
            printf("%d, ", i);
    }
    printf("\n");
    return 0;
}

int checkArm (int num){
    int j = 0, temp, rem = 0;
    float result = 0.0;
    temp = num;
    while (temp != 0){
        temp /= 10;
        ++j;
    }
    temp = num;
    while (temp != 0){
        rem = temp % 10;
        result += pow (rem, j);
        temp /= 10;
    }
    if ((int)result == num)
        return 1;
    else
        return 0;
}
