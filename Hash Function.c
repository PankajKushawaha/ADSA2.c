#include <stdio.h>
#include <string.h>

int hashFunction(const char* str) 
{
    int hash = 0;

    printf("\nASCII values of:\n");
    for (int i = 0; i < strlen(str); i++) 
    {
        printf(" %c = %d\n", str[i], (int)str[i]);
        hash += (int)str[i];
    }

    return hash;
}

int main() 
{
    char input[100];

    printf("Enter a string: ");
    scanf("%99s", input); 

    int hash = hashFunction(input);
    printf("\nTotal ASCII value of strings: %d\n", hash);

    return 0;
}