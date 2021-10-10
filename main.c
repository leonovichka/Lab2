#include "func.h"
int main()
{
    int operator;
    scanf("%d", &operator);
    double x, y;
     switch(operator){
        case 1:
            scanf("%lf %lf",&x, &y);
            if (isInArea(x,y))
                printf("Point is in area");
            else
                printf("Point is in outside of an area");
            break;                 
            
        case 2:            
            scanf("%lf", &x); 
            printf("%lf ", f(x));
            break;
        default: 
            printf("Error");
            break;
    }
    return (0);
}
