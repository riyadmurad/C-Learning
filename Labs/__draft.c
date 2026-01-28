#include <stdio.h>

// Write your code below
struct Table {
  float length;
  float width;
  float height;
  char color[20];
};
int main(void) {
  int table1Length = 24;
  int table1Width = 24;
  int table1Height = 20;
  char table1Color[20] = "Dark Brown";

  int table2Length = 42;
  int table2Width = 18;
  int table2Height = 32;
  char table2Color[20] = "Matte Black";

  // Write your code below
  struct Table table1 = {table1Length, table1Width, table1Height, table1Color};
  struct Table table2 = {table2Length, table2Width, table2Height, table2Color};

  printf("Table 1: Length = %.2f, Width = %.2f, Height = %.2f, Color = %s\n", table1.length, table1.width, table1.height, table1.color);
  printf("Table 2: Length = %.2f, Width = %.2f, Height = %.2f, Color = %s\n", table2.length, table2.width, table2.height, table2.color);
}