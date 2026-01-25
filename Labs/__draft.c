#include<stdio.h>
#include<string.h>
int main() {
  char text[] = "Hello, World!";
  char copiedtet[strlen(text) + 1];
  strcpy(copiedtet, text);
  printf("Original: %s\n", text);
  printf("Copied: %s\n", copiedtet);
  return 0;
}