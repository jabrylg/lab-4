#include <stdio.h>
#include <stdlib.h>

/* defining a type of function to be used in the array of addresses of function */
//https://stackoverflow.com/questions/3674200/what-does-a-typedef-with-parenthesis-like-typedef-int-fvoid-mean-is-it-a
typedef int (*Operation)(int a, int b);

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int exiting(int a, int b);

int main(void)
{
  int a = 10;
  int b = 5;
  int operation;

  Operation operators[5] = {&add, &subtract, &multiply, &divide, &exiting};


  /* IMPLEMENT ME: Insert your algorithm here */
  printf("a = %d ", a);
  printf("b = %d \n", b);
  printf("Specify the operation to perform 0 : add, 1 : subtract, 2 : multiply, 3 : divide, 4 : exit \n");
  
  int result;
  while(1){
    printf("Enter an operation: ");
    result = 0;
    scanf(" %d", &operation);
    result = operators[operation](a, b);
    printf("x = %d\n", result);
  }
  
  return result;
}

/* IMPLEMENT ME: Define your functions here */
int add(int a, int b)
{
  printf("Adding \n");
  return a + b;
}

int subtract(int a, int b)
{
  printf("subtracting \n");
  return a - b;
}

int multiply(int a, int b)
{
  printf("multiplying \n");
  return a * b;
}

int divide(int a, int b)
{
  printf("dividing \n");
  return a / b;
}

int exiting(int a, int b)
{
  printf("exiting \n");
  exit(0);
  return 0;
}