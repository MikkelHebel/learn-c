#include <stdio.h>

int main(int argc, char *argv[]) {
  // Format specifier = special tokens that begin with a % symbol
  //                    followed by a character that specifies the data type
  //                    and optional modifiers (width, precision, flags)
  //                    They control how data is displayed or interpreted
  
  int age = 22;
  float price = 34.99;
  double pi = 3.1415926535;
  char currency = '$';
  char name[] = "Mikkel";
  printf("%d\n", age);
  printf("%.2f\n", price);
  printf("Pi: %lf\n", pi);
  printf("Pi (Truncated): %.2lf\n", pi);
  printf("Pi (Extended): %.10lf\n", pi);
  printf("%c\n", currency);
  printf("%s\n", name);

  int num1 = 1;
  int num2 = 19;
  int num3 = 420;
  puts("Prints with atleast 3 spaces");
  printf("%3d\n", num1);
  printf("%3d\n", num2);
  printf("%3d\n", num3);

  puts("Left justify: Add the space after");
  printf("%-3d\n", num1);
  printf("%-3d\n", num2);
  printf("%-3d\n", num3);

  puts("Place zeroes in front");
  printf("%03d\n", num1);
  printf("%03d\n", num2);
  printf("%03d\n", num3);

  puts("Shows sign");
  num3 = -990;
  printf("%+d\n", num1);
  printf("%+d\n", num2);
  printf("%+d\n", num3);
  printf("Pi: %15lf\n", pi); // Minimum width to display
  printf("Pi: %+lf\n", pi); // Positive number


  return 0;
}
