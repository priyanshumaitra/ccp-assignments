
/*5.QF09. Write a C program to print all strong numbers between given interval using functions.*/

#include <stdio.h>

int checkStrong (int);

int main(){
    int i, start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("All strong numbers between %d to %d are: ", start, end);
    for (i = start; i < end; i++){
        if (checkStrong(i) == 1)
            printf("%d, ", i);
    }
    printf("\n");
    return 0;

}

int checkStrong (int num){
    int i, temp, rem = 0, fact = 1, sum = 0;
    temp = num;
    while (temp != 0){
        rem = temp % 10;
        for (i = 1; i <= rem; i++)
            fact *= i;
        temp /= 10;
        sum += fact;
        fact = 1;
    }
    if (sum == num)
        return 1;
    else 
        return 0;
}
