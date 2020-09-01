//Author: Kevin Chen khc5132@psu.edu
//Collborator: Nicholas Colinear nfc5261@psu.edu
//Collborator: Kristina Balta kqb5799@psu.edu
//Collborator: Daniel Chai dac5934@psu.edu


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char * temps = readline("Enter temperature in celsius: ");
  double temp = atof(temps);
  double tempf = temp * 1.8 + 32; 
  printf( "%f° in Celsius is equivalent to %f° Fahrenheit." , temp, tempf);
  return 0;
}

