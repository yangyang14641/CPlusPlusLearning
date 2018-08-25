/* Program name: tryScientificNotation.c
*  Try scientific notation in scanf and prinf
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    double f;
    scanf("%lf",&f);
    printf("%20.15E\n",f);

    return 0;
}