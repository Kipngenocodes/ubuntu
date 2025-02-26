#include <stdio.h>

int main() {
    printf("Special Characters in C:\n");

    // Newline (\n)
    printf("1. Newline: Hello\nWorld\n");

    // Tab (\t)
    printf("2. Tab:\tColumn1\tColumn2\tColumn3\n");

    // Backslash (\\)
    printf("3. Backslash: This is a backslash -> \\\n");

    // Single Quote (\')
    printf("4. Single Quote: It\'s a great day!\n");

    // Double Quote (\")
    printf("5. Double Quote: \"C programming is fun!\"\n");

    // Carriage Return (\r)
    printf("6. Carriage Return: First Line\rOverwritten Line\n");

    // Backspace (\b)
    printf("7. Backspace: ABC\bD (Removes C)\n");

    // Form Feed (\f) - Some consoles may not support it
    printf("8. Form Feed: First Page\fSecond Page\n");

    // Alert/Bell (\a) - Makes a beep sound
    printf("9. Alert/Bell: Beep sound\a (if supported)\n");

    return 0;
}
