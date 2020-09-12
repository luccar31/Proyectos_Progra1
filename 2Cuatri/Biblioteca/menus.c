#include "menus.h"

void menu_principal (void){

     int opc;

     do{
         system("cls");
         printf("Seleccione la opcion para ver los submenus disponibles:\n"
                "1 - Matematicas\n"
                "2 - Fechas\n"
                "3 - Vectores\n"
                "4 - Matrices\n"
                "Digite cualquier otra tecla para salir del programa\n");

         scanf("%i",&opc);

         switch(opc){
            case 1: submenu_matematicas(); break;
            case 2: submenu_fechas(); break;
            case 3: submenu_vectores(); break;
            case 4: submenu_matrices(); break;
            default: break;
         }

     }while (opc > 0 && opc < 5);
}

void submenu_matematicas(void){

     int opc;
     double x, y, TOL = 0.0000001, f;

     printf("Ingrese un valor para x:\n");
     scanf("%lf",&x);
     printf("Ingrese un valor para y:\n");
     scanf("%lf",&y);

     do{
         system("cls");
         printf("Seleccione la opcion:\n"
                "1 - Factorial\n"
                "2 - Numero combinatorio\n"
                "3 - Funcion e^x\n"
                "4 - Raiz cuadrada\n"
                "5 - Comprobar numero de Fibonacci\n"
                "6 - Funcion seno\n"
                "7 - Numero perfecto, deficiente o abundante\n"
                "8 - Producto a traves de sumas\n"
                "9 - Resto de una division\n"
                "10- Calcular suma de primeros n numeros\n"
                "11- Calcular suma de primeros n numeros pares\n"
                "12- Calcular suma de primeros n numeros pares menores que n\n"
                "13- ¿Es primo?\n");


         scanf("%i",&opc);

         switch(opc){
            case 1: f = factorial(x);
                    printf("%f\n",f);
                    system("pause");
                    break;
            case 2: f = combinatorio(x, y);
                    printf("%i\n",(int)f);
                    system("pause");
                    break;
            case 3: f = exponential_e((int)x, TOL);
                    system("pause");
                    break;
            case 4: f = square_root(x, TOL);
                    system("pause");
                    break;
            case 5: f = is_Fibonacci((int)x);
                    printf("%s\n", (f > 0) ? "Es Fibonacci": "NO es Fibonacci");
                    system("pause");
                    break;
            case 6: sen(x, TOL);
                    printf("%f\n", f);
                    system("pause");
                    break;
            case 7: f = is_perfect((int)x);
                    printf("%i\n", (int)f);
                    system("pause");
                    break;
            case 8: f = prodbysums((int)x, (int)y);
                    system("pause");
                    break;
            case 9: f = restof((int)x, (int)y);
                    system("pause");
                    break;
            case 10:f = sum_natural((int)x);
                    system("pause");
                    break;
            case 11: sum_even_natural(); system("pause");break;
            case 12: sum_even_lessth_n(); system("pause");break;
            case 13: is_prime(); system("pause");break;
            default: break;
         }

     }while (opc > 0 && opc < 14);
}

void submenu_fechas(void){
}

void submenu_vectores(void){
}

void submenu_matrices(void){
}
