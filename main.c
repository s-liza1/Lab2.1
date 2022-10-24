#include <stdlib.h>

#include <stdio.h>

#include <math.h>

int main() {


double x, y;


    printf("Enter x:");

    scanf("%lf", &x);


    if (0 <= x  && x < 3){

        y = 0.5 * cos(x/2) - 1/pow(x,2) * sin(2*x);
    }


    else if (7 <= x && x <10) {

        y = 4-pow(x,2);
    }


    else if (10 <= x && x < 30){

        y = 10/x + pow(x,2);
    }


    else {

        y = 2;
    }


    system("cls");


     printf("x = %lf", x);

     printf("\ny = %lf", y);

     return 0;

    }



