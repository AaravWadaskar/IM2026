#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    int num = x;
    long rev = 0;
    if(x < 0)
    {
        return false;
    }
    while(x != 0)
    {
        rev = (rev*10) + (x%10);
        x = x/10;
    }
    if(num == (int)rev)
    {
        return true;
    }
    return false;
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPalindrome(num))
    {
        printf("Number is a Palindrome\n");
    }
    else{
        printf("Number is not a Palindrome\n");
    }
}