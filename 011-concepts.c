#include <stdio.h>
#define DEBUG (1)

int add(int a, int b) {
    return a+b;
}

int passed(int marks) {
    return marks > 40;
}


// 'main' is is the entry method
void main() {
  #ifdef DEBUG
   printf("\ni am inside main and DEBUG is defined");
  #endif
  #ifndef DEBUG
   printf("\ni am inside main but DEBUG is not defined");
  #endif

  int x=3, y=5; // initialise integers
  int z[3] = {1,5,23}; // initialise an int array of size 3
  int p = x; // initialise int with another variable

  // Other data type initialisations
  long distance = 123451231;
  char a = 10;
  char* n = "Sru";
  char name[20] = "1234567890";

  // Arithmetic Operators:   +, -, /, * , %
  // Logical Operators:    > , < , !=, ==, &&, ||, XOR
  // Operators and precedence: https://www.tutorialspoint.com/cprogramming/c_operators.htm

  //x==y -> is 3 equal to 5? -> false
  printf("\nEquals: %d", x==y);
  // x=y -> can you assign y to x? -> true
  printf("\nAssigned: %d", x=y);

  int result = add(x,y);
  printf("%d + %d = %d", x, y, result);

  int m = 35;
  // Calling a function and using a simple if with single statements (no braces)
  if(passed(m)) printf("\nPassed");
  else printf("\nFailed");

  // Same thing as above, but with ?: conditional operator
  printf(passed(m) ? "\nPassed" : "\nFailed");
}

/*
Logical Operators
(a==b && c==d)
TRUE AND TRUE = TRUE
FALSE AND TRUE = FALSE
TRUE AND FALSE = FALSE
FALSE AND FALSE = FALSE

(a==b || c==d)
TRUE OR TRUE = TRUE
FALSE OR TRUE = TRUE
TRUE OR FALSE = TRUE
FALSE OR FALSE = FALSE
*/

