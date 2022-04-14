#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaring Function
void caesarCipher(char *, char *, unsigned int, int);

int main(){
  // Setting up variables
  char input[] = "abcdefghijklmnopqrstuvwxyz";
  char output[sizeof(input)];
  unsigned int N = sizeof(input);
  int os = 15;

  // Doing and printing out the cipher
  caesarCipher(input, output, N, os);
  printf("input: %s, output: %s\n", input, output);

  char newInput[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char newOutput[sizeof(newInput)];

  caesarCipher(newInput, newOutput, N, os);
  printf("input: %s, output: %s\n", newInput, newOutput);

  char decipherIn[] = "Oazsdmfgxmfuaze kag tmhq odmowqp ftq oubtqd ftdagst ndgfq radoq";
  char decipherOut[sizeof(decipherIn)];
  unsigned int Ndecipher = sizeof(decipherIn);

  for(int i = 0; i < 26; i++){
    caesarCipher(decipherIn, decipherOut, Ndecipher, i);
    printf("input: %s, output: %s\n", decipherIn, decipherOut);
  }

  return 0;
}

void caesarCipher(char *input, char *output, unsigned int N, int os){
  int shift;

  // Looping over every letter in input
  for(int i = 0; i < (int) N; i++){
    // Calculating the amount of shift to make the respective letter is 0 in ascii
    if((int) input[i] >= 65 && (int) input[i] <= 90){ //Checking if the current letter is a capital letter
      // Making it so that A is 0 from the ascii value
      shift = 65;
    } else if((int) input[i] >= 97 && (int) input[i] <= 122){ //Checking if the current letter is a lower letter
      // Making it so that a is 0 from the ascii value
      shift = 97;
    } else{
      shift = 0;
    }


    // Shfting the asii value so that the corresponding "a" is 0
    int shiftedValue = input[i] - shift;
    int newValue;
    // Doing the cipher
    if(shift == 0) {
      newValue = shiftedValue;
    }
    else{
      newValue = (shiftedValue + os) % 26;
    }
    // Add back the shifted value to the correct ascii value
    output[i] = newValue + shift;
  }

  // Adding an end of string character to output so that it stops printing
  output[N - 1] = '\0';
}
