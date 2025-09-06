// Recursion to find the factorial of a number

#include <stdio.h>
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

// Recursion to find the fibonacci series

#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}

// Recursion to find the sum of n natural numbers

#include <stdio.h>
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}


// Basic recursion

int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}