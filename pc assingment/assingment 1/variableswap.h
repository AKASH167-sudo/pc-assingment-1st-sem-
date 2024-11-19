/*
 * File name: variableswap.h
 * Creation Date: 11-10-2024
 * Author: Akash Kumar
 * This is the header file for Assignment 001.
 * All functions declared in this file return 0 on success.
 */

#ifndef VARIABLESWAP_H
#define VARIABLESWAP_H

#include<string.h>
#include<stdlib.h>

// Swap function for int data type
int Swapwitht(int* a,int* b) // swaps using another variable t
{
  int t=0;

  t=*a;
  *a=*b;
  *b=t;

  return 0;
}

// swap without using another variable
int swapwithout(int* a,int* b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

    return 0;
}

// swap without using another variable
int swapusingmem(void* a,void*b,size_t n)
{
   void* t=malloc(n);

   if(t==NULL) return -1;

   memcpy(t,a,n);
   memcpy(a,b,n);
   memcpy(b,t,n);

   free(t);

   return 0;
}

#endif
