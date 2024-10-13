/*Write a user-defined function named fibN(int n) to calculate and print up to the nth term (F0 to Fn) in the Fibonacci sequence.

defines the Fibonacci sequence and asks to write a function named fibN(int n) that calculates and prints the Fibonacci sequence from F0F_0F0​ to FnF_nFn​.
The Fibonacci sequence is defined as:
Fn=Fn−1+Fn−2F_n = F_{n-1} + F_{n-2}Fn​=Fn−1​+Fn−2​
with initial values F0=1F_0 = 1F0​=1 and F1=1F_1 = 1F1​=1*/

#include <stdio.h>

void fibN(int n) {
  int a = 0, b = 1, c;
  for (int i = 0; i <= n; i++) {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }
}
int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  fibN(n);
  return 0;
}
