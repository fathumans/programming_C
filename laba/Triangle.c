#include <math.h>
#include <stdbool.h>

int Perimetr(double a, double b, double c){
    return a + b + c;
};

int Ploshad(double a, double b, double c, double p){
    return sqrt(p*(p-a)*(p-b)*(p-c));
};

bool RealorFake (double a, double b, double c){
    return (a < b+c) && (b <c+a) && (c < a+b);
}
