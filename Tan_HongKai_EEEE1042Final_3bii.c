#include <stdio.h>

// Declaring Function
void swapFloat(float *, float *);

int main(){
  // Declaring the 2 floats
  float float1 = 6.9;
  float float2 = 42.0;

  // Printing Before the Swap
  printf("%f, %f\n", float1, float2);

  // Swapping the Variables
  swapFloat(&float1, &float2);

  // Printing After the Swap
  printf("%f, %f\n", float1, float2);

  return 0;
}

void swapFloat(float *f1, float *f2){
  // Creating a temporary variable to store the value of float 1
  float tmpFloat = *f1;

  // Doing the Swap
  *f1 = *f2;
  *f2 = tmpFloat;
}
