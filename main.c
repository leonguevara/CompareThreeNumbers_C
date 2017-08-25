/*
 *  main.c
 *  CompareThreeNumbers_C
 *
 *  This program will help you get the biggest number among three given by the user.
 *
 *  C Standard: C99
 *
 *  Author: León Felipe Guevara Chávez
 *  email:  leon.guevara@itesm.mx
 *  date:   May 29th, 2017
 */
#include <stdio.h>

int main() {
    double number1, number2, number3, biggest;  //  Variables to hold the numbers given by the user
                                                //  as well as the biggest of the three

    //  We ask for and read three numbers
    printf("Give me three numbers:\n");
    scanf("%lf %lf %lf", &number1, &number2, &number3);

    //  We find which of the three numbers is the biggest
    if (number1 >= number2 && number1 >= number3) {
        //  If number1 is bigger than or equals to number2 and number3, then number2 is the biggest
        biggest = number1;
    } else {
        if (number2 >= number1 && number2 >= number3) {
            //  If number2 is bigger than or equals to number1 and number3, then number2 is the biggest
            biggest = number2;
        } else {
            //  If none of the above were true, then number3 is the biggest
            biggest = number3;
        }
    }

    //  We display our findings
    printf("The biggest number among the three is: %f", biggest);

    return 0;
}