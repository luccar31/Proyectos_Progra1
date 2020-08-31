#include "funciones.h"

double factorial (double n){

    double num = n, res=1;
    int i;

    if (num==0){
        return 1;
    }
    for (i=1;i<=num ;i++){
        res*=i;
    }
    return res;
}

double seno(double numero, double tolerancia){

    double num=numero, TOL=tolerancia, result, ult_term;
    int i=0;

    do{
        printf("\nIteracion n°%d",i);
        printf("\n%d",(i%2));
        if((i%2)==0){
            result+=pow(num,2*i+1)/factorial(2*i+1);
        }
        else{
            result-=pow(num,2*i+1)/factorial(2*i+1);
        }
        printf("\nResultado hasta ahora:%f",result);
        ult_term=pow(num,2*i+1)/factorial(2*i+1);
        printf("\nResultado del ultimo termino en valor absoluto:%f\n\n",ult_term);
        i++;
    }while(ult_term>TOL);

    return result;
}
