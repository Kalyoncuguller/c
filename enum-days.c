#include <stdio.h>

enum days { Monday, Tuesday, Wednesday, Thursday,Friday,Saturday,Sunday },i;

int main(){
  int option;

  printf("Enter a number[0-6]: ");
  scanf("%d", &option);

  i = option;

  switch (i) {
    case Monday: printf("Monday");
       break;
    case Tuesday: printf("Tuesday");
       break;
    case Wednesday: printf("Wednesday");
       break;
    case Thursday: printf("Thursday");
       break;
    case Friday: printf("Friday");
       break;
    case Saturday: printf("Saturday");
       break;
    case Sunday: printf("Sunday");
       break;
    default:
        printf("Please enter numbers between 0 and 6");
  }
  
  return 0;
}
