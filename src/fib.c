/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    //Precondition
    assert(n >= 1);
    /*First two numbers in the fibonacci sequence are 1.
    If they are reached return the current fibonacci number*/
    if (n == 1 || n == 2) {
        return p;
    } else {
        /*First integer counts, how far the recusive loop has to take,
        the second adds the current and the previous values together, and
        the last is the current fibonacci number, which will be displayed.*/
        return fib(n - 1, p + pp, p);
    }
    
}
