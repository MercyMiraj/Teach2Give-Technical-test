//Write a program that takes an integer as input and returns true if the input is a power of two

//SOLUTION IN C LANGUAGE

#include <stdio.h>

int a(int n) {
  // If the number is a zero or a negative
  if (n <= 0) {
    return 0; 
  }

  // Check if only one bit is set (using bitwise AND):
  return (n & (n - 1)) == 0;
}

int main() {
  int b;

  printf("Enter an integer: ");
  scanf("%d", &b);

  if (a(b)) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}
