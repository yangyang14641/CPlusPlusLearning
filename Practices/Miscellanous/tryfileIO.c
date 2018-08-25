/* Program name: tryfileIO.c
*  To count how many elements in the file, except space " " = 0x20 and Line Feed "\n" = 0x0A
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp;
    int n;
    int content;
    
    n = 0;
    fp = fopen("A.dat","r");
    while((content = fgetc(fp)) != EOF)
    {
        printf("fgetc = %d\n", content);
        if(content != 0x20 && content != 0x0A) n++;
    }
    printf("Element in the file is %d \n",n);
    fclose(fp);

    return 0;
}