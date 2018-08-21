// Program floatsArithmetic.c

// To show the precision of IEEE 754 floats
// for double-precision floats try this command in bash/shell: echo "scale=20;2^(-52)" | bc
// for single-precision floats try this command in bash/shell: echo "scale=20;2^(-23)" | bc
// then, see how many zeros behind the point: .
// like this：
// YangYang$ echo "scale=20;2^(-52)" | bc
// .00000000000000022204
// total 15 zero behind the point, so double-precision float accurate is approximately equals to 10^(-15)

// Author: Yang Yang @ Department of Mechanics and Engineering Science @ Peking University
// Create Date: 10/08/2018
// Update Date: 21/08/2018 

// Head files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Macros
#define __USE_MISC 1    // Using built-in M_PI value in C Language.'s math.h

// Changing the precision in the program easily by using Macros
#define FLOAT float     // using single-precision float
//#define FLOAT double    // using double-precision float


int main(int argc, char **argv)
{
  int i;

  double double_Pi = M_PI;   // define PI in double-precision floats 
  float  single_Pi = M_PI;   // define PI in single-presition floats
  FLOAT Pi = M_PI;           // define PI in singel-precision or double-precision floats

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
  printf("#define FLOAT Pi = %25.20lf\n", Pi);
  printf("\n M_PI in <math.h> is:\n");
  printf("#define M_PI        3.14159265358979323846264338327950288   /* pi             */ \n");

  return 0;
}
