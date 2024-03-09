#include <stdio.h>
int main() {
    char str[10000];
    char search_char;
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter char to search: ");
    scanf(" %c", &search_char);
    for (i = 0; str[i] != '\0'; i++)
     {
        if (str[i] == search_char) {
            printf("'%c' is found at index %d\n", search_char, i);
            return 0;
        }
    }
    printf("'%c' is not found in the string.\n", search_char);
    return 0;
}
