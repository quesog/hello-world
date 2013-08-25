//
//  main.cpp
//  HelloWorld
//
//  Created by Chad Braden on 8/24/13.
//  Copyright (c) 2013 Chad Braden. All rights reserved.
//

#include <stdio.h>

long int memo[100];

long int fib(long int fibnum)
{
    if(memo[fibnum] != 0)
    {
        return memo[fibnum];
    }
    else if(fibnum == 0)
    {
        memo[fibnum] = 0;
    }
    else if (fibnum == 1)
    {
        memo[fibnum] = 1;    }
    else
    {
        memo[fibnum] = fib(fibnum - 1) + fib(fibnum - 2);
    }
    
    return memo[fibnum];
}

int main(int argc, const char * argv[])
{
    for(int i=1; i<100; i++)
    {
        printf("%d: %ld\n", i, fib(i));
    }
}

