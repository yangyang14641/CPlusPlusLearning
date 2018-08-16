// Head files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Macros
#define __USE_MISC 1   // to use built-in M_PI value in Clang.'s math.h

int main(int argc, char **argv)
{
  int i;

  double double_Pi = M_PI;   // define PI in double-precision floats 
  float  single_Pi = M_PI;   // define PI in single-presition floats

  printf("argc = %d\n",argc);
  printf("Program name: %s\n", *argv);

  for(i=0; i<argc-1; i++)
  {
     argv++;
     printf("%s ",*(argv));
  }
 
  printf("\n");
  printf("Double-precision float Pi = %25.20lf\n", double_Pi);
  printf("Single-precision float Pi = %25.20f\n", single_Pi);
   
  return 0;
}
