#include "sumn.h"

#include<stdio.h>
#include <assert.h>
#include <math.h>

int sumn (int n)
{
    //Adding the positive odd numbers
    assert(n >= 1);
    //Base case
    if(n == 1){
        return 2 * n - 1;
        //Inductive step, when n > 1
    } else {
        //Adding the positive odd numbers until 1 is reached
        return (2 * n - 1) + sumn(n - 1);
    } 
    
}