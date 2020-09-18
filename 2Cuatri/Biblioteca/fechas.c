#include "fechas.h"

int isValidDate(tDate date){
    if(date.year > 1600)
        if(date.month >= 1 && date.month <= 12)
            if(date.day >=1 && daysInMonth(date.month, date.year))
                return 1;
    return 0;
}

int daysInMonth(int m, int y){

    int daysMth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (isLeapYear(y) && m == 2) ? 29 : daysMth[m-1];
}

int isLeapYear(int y){
    return (y%400 == 0 || (y%100 != 0 && y%4 == 0)) ? 1 : 0;
}

tDate nextDay(tDate date){

    if (date.day == daysInMonth(date.month, date.year) && date.month == 12){
        date.day = 1;
        date.month = 1;
        date.year++;
    }
    else if (date.day == daysInMonth(date.month, date.year)){
        date.day = 1;
        date.month++;
    }
    else{
        date.day++;
    }

    return date;
}

tDate nextNDays(tDate date, int n){

    date.day = date.day + n;

    while (date.day > daysInMonth(date.month, date.year)){

        date.day -= daysInMonth(date.month, date.year);
        date.month++;

        if(date.month > 12){
            date.month = 1;
            date.year++;
        }
    }

    return date;
}
