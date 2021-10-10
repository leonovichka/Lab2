#include "func.h"
double f(double x){
    return ((x <= 3) ? (x*x - 3*x + 9) : (1/(x*x*x +6)));
}