/*5.QF01.Write a C program to find cube of any number using function.*/

#include <stdio.h>
#include <math.h>
/*function prototype declaration*/
int doCube (int);
/*main function*/
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Cube of %d is %d\n", num, doCube(num));
    return 0;
}
/*function block*/
int doCube(int num){
    int cube;
    cube = pow (num, 3);
    return cube;
}
