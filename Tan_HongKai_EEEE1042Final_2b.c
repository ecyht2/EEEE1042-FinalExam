#include <stdio.h>

// Declaring Functions
void processInput(int, char *);
void processInput2(int, char *);

int main(int argc, char **argv){
  // Looping over all the arguments
  for(int i = 0; i < argc; i++){
    // Calling processInput with the given argument
    if((i % 2) == 0)
        processInput(i, argv[i]);
    else processInput2(i, argv[i]);
  }

  return 0;
}

void processInput(int index, char *argv){
  // Printing the index and the argument it self
  printf("%d: %s\n", index, argv);
}

void processInput2(int index, char *argv){
  // Declaring needed vars
  char cChar;
  int counter = 0;

  // Finding out how many letters the argv has
  do{
    cChar = argv[counter];
    counter++;
  }while(cChar != '\0');

  // Printing the index
  printf("%d: ", index);
  // Printing out argv in reverse
  for(int i = counter - 2; i >= 0; i--) printf("%c", argv[i]);
  // Printing newline
  printf("\n");
}
