#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int alp = 0, digits = 0, specials = 0, i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0') {
        if (isalpha(str[i]))
            alp++;
        else if (isdigit(str[i]))
            digits++;
        else
            specials++;
        i++;
    }
    printf("Total alphabets: %d\n Total digits: %d\n Total special characters: %d\n", alp , digits, specials);
    return 0;
}
