#include "c_type.h"
//Implementación de las funciones ctype
///falta toAscii()

int toLower(int ch){
    return ch >= 'A' && ch <= 'Z' ? ch + 32: ch;
}

int toUpper(int ch){
    return ch >= 'a' && ch <= 'z' ? ch - 32: ch;
}

int isUpper(int ch){
    return (ch >= 'A' && ch <= 'Z');
}

int isLower(int ch){
    return (ch >= 'a' && ch <= 'z');
}

int isDigit(int ch){
    return (ch >= '0' && ch <= '9');
}

int isAscii(int ch){
    return (ch >= 0 && ch <= 127);
}

int isAlpha(int ch){
    return (isLower(ch) || isUpper(ch));
}

int isAlNum(int ch){
    return (isLower(ch) || isUpper(ch) || isDigit(ch));
}

int isPrint(int ch){
    return (ch >= ' ' && ch <= '~');
}

int isGraph(int ch){
    return (ch >= '!' && ch <= '~');
}

int isPunct(int ch){
    return (!isAlNum(ch) && ch != ' ');
}

int isCntrl(int ch){
    return ((ch >= 0 && ch <= 31) || ch == 127);
}

int isSpace(int ch){
    return ((ch >= 9 && ch <= 14) || ch == ' ');
}

int isXDigit(int ch){
    return (isDigit(ch) || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F'));
}
