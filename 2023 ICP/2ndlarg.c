/*2(b)
Write a user-defined function to find and return the second largest number in a given array.
Function prototype 
Int find2ndMax(int numbers[],int size);*/

#include <stdio.h>
int find2ndMax(int numbers[], int size) {
  int max = numbers[0];
  int secondMax = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] > max) {
      secondMax = max;
      max = numbers[i];
    } else if (numbers[i] > secondMax && numbers[i] != max) {
      secondMax = numbers[i];
    }
  }
  return secondMax;
}

int main() {
  int numbers[] = {1, 2, 3, 4, 5};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  printf("The second largest number is %d\n", find2ndMax(numbers, size));
  return 0;
}
