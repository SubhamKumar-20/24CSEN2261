CODE:-
#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowelCount = countVowels(str);

    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}

OUTPUT:-
Enter a string: Hello World
Number of vowels: 3
