#include <stdio.h>

int sum_to_n(int n) {
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  return sum;
}

int main(void) {
  int n;

  printf("Enter a positive number: ");

  if (scanf("%d", &n) != 1) {
    printf("Invalid input.\n");
    return 1;
  }

  if (n < 1) {
    printf("Please enter a positive number.\n");
  } else {
    printf("Sum = %d\n", sum_to_n(n));
  }

  return 0;
}