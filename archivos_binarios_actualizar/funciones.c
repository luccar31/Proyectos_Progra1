#include "funciones.h"

int cargar_archivo1(char * path){
    t_alumno alu_vec[] = {
                        {"Alumno 1", 100, 36, {5,6,7,8,9}, 3.9},
                        {"Alumno 2", 105, 57, {5,6,7,8,9}, 4.4},
                        {"Alumno 3", 1, 24, {5,6,7,8,9}, 7.8},
                        {"Alumno 4", 2, 21, {5,6,7,8,9}, 2.4},
                        {"Alumno 5", 7, 56, {5,6,7,8,9}, 5.9},
                        {"Alumno 6", 90, 76, {5,6,7,8,9}, 1.1},
                        {"Alumno 7", 1020, 10, {5,6,7,8,9}, 6.8}
    };

    FILE * pf = fopen(path, "wb");
    if(!pf)
    {
        return 0;
    }
    ///fwrite(alu_vec, sizeof(t_alumno), 7, pf);
    fwrite(alu_vec, sizeof(alu_vec), 1, pf);
    fclose(pf);
    return 1;
}
