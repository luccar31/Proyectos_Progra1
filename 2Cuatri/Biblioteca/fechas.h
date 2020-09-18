#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED

typedef struct{
    int day,
        month,
        year;
} tDate;

int isValidDate(tDate date);
int daysInMonth(int m, int y);
int isLeapYear(int y);
int isLeapYear(int y);
tDate nextNDays(tDate date, int n);

#endif // FECHAS_H_INCLUDED
