#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int key;
    if(argc == 2)
        key = atoi(argv[1]);
    else
    {
        printf("One key is required!\n");
        return 0;
    }
    char text[100];

    printf("Enter the text: ");
    fgets(text, 100, stdin);
    for(int i = 0; text[i] != '\0'; i++)
    {
        if((text[i] >= 'A' && (text[i] <= 'Z')) || (text[i] >= 'a' && (text[i]) <= 'z'))
        {
            if((text[i] >= 'A' && text[i] <= 'Z'))
            {
                int diff = 'Z' - text[i];
                if(key <= diff)
                {
                    text[i] = text[i] + key;
                }
                else{
                    text[i] = 'A' + (key - diff - 1);
                }
            }
            else if((text[i] >= 'a' && text[i] <= 'z'))
            {
                int diff = 'z' - text[i];
                if(key <= diff)
                {
                    text[i] = text[i] + key;
                }
                else{
                    text[i] = 'a' + (key - diff - 1);
                }
            }
        }
    }
    printf("Encrypted text: %s\n", text);
    return 1;
}