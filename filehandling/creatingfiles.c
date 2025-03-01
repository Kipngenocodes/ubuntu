#include <stdio.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("filename.txt", "a");

//  Write some text to the file
  fprintf(fptr, "I love C and python programming languages.\n");

// append more text to the file
  fprintf(fptr, "\nI love C++ programming language.\n");


// read some text from the file
  char myString[100];
    fscanf(fptr, "%s", myString);
    printf("%s", myString);

  // Close the file
  fclose(fptr);

  return 0;
}
