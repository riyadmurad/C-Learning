#include <stdio.h>

int main() {

  double i = 0;
  char input[20];
  scanf("%s", input);

  while (i < 10) {
    // Figure out how to skip the print of 5 here
    if (i== 5){
        i++;
      continue;
    }
    printf("%s %ld\n", input, i);
    i++;
 }

    
  return 0;
}
