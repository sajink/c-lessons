#include <stdio.h>

// #define DEBUG (1)

bool ISDEBUG = true;


// This method is the entry method
void main() {
  int x=3, y=5, z[3];
  int p = x;

  /*
  z[0]=1;
  z[1]=5;
  z[2]=23;
    */


x==y -> is 3 equal to 5? -> false
x=y -> can you assign y to x? -> true

  long distance = 123451234512345;
  char a = 10;
  char* n = "Sruthy";
  char name[20] = "1234567890";

  int result = add(x,y);
  //result will be 8

  int m = 35;
  
  #ifdef DEBUG
   print("i am inside main");
  #endif

  if(ISDEBUG) {
   print("i am inside main");
  }
  
  if(passed(m)) {
    print("Passed");
  } else {
    print("Failed");
  }


  print(passed(m) ? "Passed" : "Failed");

}

(a==b && c==d)
TRUE AND TRUE = TRUE
FALSE && TRUE = FALSE
TRUE && FALSE = FALSE
FALSE && FALSE = FALSE

(a==b || c==d)
TRUE OR TRUE = TRUE
FALSE OR TRUE = TRUE
TRUE OR FALSE = TRUE
FALSE OR FALSE = FALSE



int add(int a, int b) {
    return a+b+g;

    // Arithmetic Operators
    // +, -, /, * , %

    // Logical
    // > , < , !=, ==, &&, ||, XOR
}

bool passed(int marks) {
    return marks > 40;
}