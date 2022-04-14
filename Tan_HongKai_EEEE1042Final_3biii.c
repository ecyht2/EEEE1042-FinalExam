#include <stdio.h>
#include <string.h>

// Declaring Function
void swapString(char *, char *);

int main(){
  // Declaring the 2 Strings
  char str1[10] = "hi";
  char str2[10] = "bye";

  // Printing Before the Swap
  printf("%s, %s\n", str1, str2);

  // Swapping the Variables
  swapString(str1, str2);

  // Printing After the Swap
  printf("%s, %s\n", str1, str2);
  return 0;
}

void swapString(char *str1, char *str2){
  // Creating a temporary variable to store the value of string 1
  char tmpStr[10];
  strcpy(tmpStr, str1);

  // Doing the Swap
  strcpy(str1, str2);
  strcpy(str2, tmpStr);
}
