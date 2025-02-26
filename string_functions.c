#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize strings
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "Programming in C";
    char copyStr[50];

    // String Length - strlen()
    printf("1. Length of '%s' = %lu\n", str1, strlen(str1));

    // String Concatenation - strcat()
    strcat(str1, str2);
    printf("2. After Concatenation: %s\n", str1);

    // String Copy - strcpy()
    strcpy(copyStr, str3);
    printf("3. Copy of str3: %s\n", copyStr);

    // String Compare - strcmp()
    int cmp = strcmp(str1, str2);
    printf("4. Comparing '%s' and '%s': %d\n", str1, str2, cmp);

    // String Reverse - strrev() (Not standard in some compilers)
    printf("5. Reverse of '%s' = ", copyStr);
    for (int i = strlen(copyStr) - 1; i >= 0; i--) {
        printf("%c", copyStr[i]);
    }
    printf("\n");

    // Finding a character in a string - strchr()
    char *pos = strchr(str3, 'C');
    if (pos) {
        printf("6. 'C' found at position: %ld\n", pos - str3 + 1);
    }

    // Finding a substring - strstr()
    char *substr = strstr(str3, "C");
    if (substr) {
        printf("7. Substring 'C' found in: %s\n", substr);
    }

    return 0;
}
