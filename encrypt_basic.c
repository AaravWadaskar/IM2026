#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];
    printf("Enter text: ");
    fgets(text, 100, stdin);
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == 'z' || text[i] == 'Z')
        {
            text[i] = text[i] - 25;
        }
        else if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')){
            text[i] = text[i] + 1;
        }
    }
    printf("Encrypted text: %s\n", text);
    return 1;
}