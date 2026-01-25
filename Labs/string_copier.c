#include<stdio.h>
#include<string.h>

void copy(char* src, char* dst){
  while (*src != '\0' ){
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0'; // Add null terminator to destination
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  char dstString[strlen(srcString) + 1];
  copy(srcString, dstString);
  printf("String Length: %lu\n", strlen(dstString));
  printf("The Destination String is: %s\n", dstString);
 
}