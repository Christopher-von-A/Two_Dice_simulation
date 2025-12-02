#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int occurrences[13] = {0}; // Index 0–1 unused, sums 2–12 used
  int i, die1, die2, sum;

  srand(time(NULL)); // Seed random number generator

  for (i = 0; i < 50000; i++) {
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
    sum = die1 + die2;
    occurrences[sum]++;
  }

  // Output results
  for (sum = 2; sum <= 12; sum++) {
    printf("%2d: %d\n", sum, occurrences[sum]);
  }

  return 0;
}
