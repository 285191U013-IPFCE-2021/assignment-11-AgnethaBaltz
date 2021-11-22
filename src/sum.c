#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  //pre-condition
  assert (n >= 1);
  //If we reached the last element, we need to add 1 too
  if (n == 1) {
    return n + total;
  } else {
    //Tail recusion, the integer n counts, and total is our output
    return sumtail(n - 1, n + total);
  }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1);
  //Using a for-loop instead of a while loop
  //At start the current sum is zero
  int sum = 0;
  for(int i = 0; i <= n; i++){
    //Taking the sum
    sum += i;
  }
  return sum;
}

