#include <stdio.h>
#include <math.h>
int reverse(int num);
int isPalindrome(int num);
int main()
{
    int num;    
    printf("Enter number: ");
    scanf("%d", &num);
    if(isPalindrome(num) == 1)
        printf("%d is palindrome", num);
    else
        printf("%d is not palindrome\n", num);
    return 0;	}
int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;    }
    return 0;	}
int reverse(int num)
{
    int digit = (int)log10(num);
        if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));	}

