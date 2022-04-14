#include <stdio.h>

// Declaring Function
float product(float, float);

int main(){
  // Declaring the 2 floats
  float float1 = 6.9;
  float float2 = 42.0;

  // Calling productt function
  printf("%f * %f = %f", float1, float2, product(float1, float2));
  return 0;
}

float product(float f1, float f2){
  // Returning the product
  return f1*f2;
}
