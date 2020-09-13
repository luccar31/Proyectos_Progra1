#ifndef MATEMATICAS_H_INCLUDED
#define MATEMATICAS_H_INCLUDED
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/*Prototipos, definiciones y estructuras de librería "matematicas"*/
#define ND -1 //NOT DEFINE
#define TRUE 1
#define FALSE 0

int factorial(int n);
int combinatorio(int m,int n);
double exponential_e(int x, float TOL);
double square_root(int numero, float TOL);
int is_Fibonacci(int n);
double sen(double x, double TOL);
int is_perfect(int n);
int prodbysums(int n, int m);
int restof(int n, int m);
int sum_natural(int n);
int sum_even_natural(int n);
int sum_even_lessth_n(int n);
int is_prime(int n);
double valor_absoluto(double n);

//Funciones que comprueban datos

int is_integer(char *strg);
int is_decimal(char *strg);

#endif // MATEMATICAS_H_INCLUDED
