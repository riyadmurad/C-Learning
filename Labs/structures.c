#include <stdio.h>

// Write your code below
struct Table {
  float length;
  float width;
  float height;
  char *color;
};
int main(void) {
  int table1Length = 24;
  int table1Width = 24;
  int table1Height = 20;
  char table1Color[20] = "Brown";

  int table2Length = 42;
  int table2Width = 18;
  int table2Height = 32;
  char table2Color[20] = "Black";

  // Write your code below
  struct Table table1 = {(float)table1Length, (float)table1Width, (float)table1Height, table1Color};
  struct Table table2 = {(float)table2Length, (float)table2Width, (float)table2Height, table2Color};

  printf("Table 1 Without Pointer: Length = %.2f, Width = %.2f, Height = %.2f, Color = %s\n", table1.length, table1.width, table1.height, table1.color);
  printf("Table 2 Without Pointer: Length = %.2f, Width = %.2f, Height = %.2f, Color = %s\n", table2.length, table2.width, table2.height, table2.color);

  printf("###############################Using Pointers##############################\n");

  struct Table* Tableptr1 = &table1;
  struct Table* Tableptr2 = &table2;
  Tableptr1->height += 2.5;
  (*Tableptr2).height += 5.5;

  printf("Table 1 With Pointer: Length = %.2f, Width = %.2f, Height = %.2f, Color = %s\n", Tableptr1->length, Tableptr1->width, Tableptr1->height, Tableptr1->color);
  printf("Table 2 With Pointer: Length = %.2f, Width = %.2f, Height = %.2f, Color = %s\n", Tableptr2->length, Tableptr2->width, Tableptr2->height, Tableptr2->color);
}