#ifndef MATEMATICAS_H_INCLUDED
#define MATEMATICAS_H_INCLUDED
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/*Prototipos, definiciones y estructuras de librería "matematicas"*/
#define ND -1 //NOT DEFINE

int factorial(int n);
int combinatorio(int m,int n);
double exponential_e(int x, float TOL);
double square_root(int numero, float TOL);
void is_Fibonacci(void);
void sen(void);
void is_perfect(void);
void prodbysums(void);
void restof(void);
void sum_natural(void);
void sum_even_natural(void);
void sum_even_lessth_n(void);
void is_prime(void);

//Funciones que comprueban datos

int is_integer(char *strg);
int is_decimal(char *strg);

#endif // MATEMATICAS_H_INCLUDED
