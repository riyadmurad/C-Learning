#include <stdio.h>

int main(void) {
  int month, day, year;
  char *month_name;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) {
    case 1: month_name = "January"; break;
    case 2: month_name = "February"; break;
    case 3: month_name = "March"; break;
    case 4: month_name = "April"; break;
    case 5: month_name = "May"; break;
    case 6: month_name = "June"; break;
    case 7: month_name = "July"; break;
    case 8: month_name = "August"; break;
    case 9: month_name = "September"; break;
    case 10: month_name = "October"; break;
    case 11: month_name = "November"; break;
    case 12: month_name = "December"; break;
    default: month_name = "Invalid Month";
  };


  printf("%s ", month_name);


  // Print the suffix for a given day
  if (day % 10 == 1 && day != 11) {
    printf("%dst,", day);
  } else if (day % 10 == 2 && day != 12) {
    printf("%dnd,", day);
  } else if (day % 10 == 3 && day != 13) {
    printf("%drd,", day);
  } else {
    printf("%dth,", day);
  };

  // Print the year
  printf(" %d\n", year);
  
  return 0;
}