#include <stdio.h>

long long factorial(int n) {
  long long result = 1;

  for (int i = 2; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");

  if (scanf("%d", &n) != 1) {
    printf("Invalid input.\n");
    return 1;
  }

  if (n < 0) {
    printf("Error: Negative numbers are not allowed.\n");
    return 1;
  }

  if (n > 20) {
    printf("Error: Enter a number from 0 to 20.\n");
    return 1;
  }

  printf("Factorial of %d = %lld\n", n, factorial(n));

  return 0;
}