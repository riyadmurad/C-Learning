#include <stdio.h>
#include <stdbool.h>
bool is_leap_year (int year){
  if (year%4 != 0){
   return false;
   }
  else if (year % 100 != 0) {
    return false;
  }
  else if (year % 400 != 0){
    return false;
  }
  else
  {
    return true;

  } 
   
}

int main() {
    int year;
    char continue_choice;
    do{
    printf("Enter a year: ");
    scanf("%d", &year);
    if (is_leap_year(year)){
        printf("%d is a leap year.\n", year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    }
    printf("Do you want to check another year? (y/n): ");
    scanf(" %c", &continue_choice);
}while (continue_choice == 'y' || continue_choice == 'Y');

}