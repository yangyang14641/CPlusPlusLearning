#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <unistd.h>
#include <math.h>

double getTime() {           
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  struct timeval time;
  time = usage.ru_utime;
  return time.tv_sec+time.tv_usec/1e6;
}
    

#define N 10000
double A[N][N], x[N], y[N];
int Y[N];

int main()
{
  int i,j;
  double time;
  
  // generate random entries
  for (i=0; i<N; i++){
    x[i]=drand48();
    for (j=0; j<N; j++) A[i][j]=drand48();
  }
  // process by rows
  for (i=0; i<N; i++)    y[i]=0;
  time = getTime();
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++)
	y[i] += A[i][j]*x[j];
  }

  printf("Accessing by rows. Time is % .2e\n", getTime()-time);

  // process by columns
  for (i=0; i<N; i++) Y[i] = 0;
  time = getTime();
  for (j=0; j<N; j++) 
    for (i=0; i<N; i++) 
      Y[i] += A[i][j]*x[j];

  printf("Accessing by cols. Time is % .2e\n", getTime()-time);
  return 0;
}

	
        
    
    
    
    

