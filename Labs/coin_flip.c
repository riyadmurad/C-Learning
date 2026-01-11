#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Create random number that returns 0 or 1
    srand(time(0)); // Seed the random number generator
    int coin = rand() % 2; // Generate a random number (0 or
    if (coin == 0) {
        printf("Head\n");
  } else {
        printf("Tail\n");
  }
}