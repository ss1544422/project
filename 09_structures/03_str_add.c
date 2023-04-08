/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Suraj Singh
 * Title: Program Engineer
 * Last Modified Date: 04.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

complex add(complex c1, complex c2);

int main() {
    complex num1, num2, sum;

    printf("For 1st complex number:\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f%f", &num1.real,&num1.imag);

    printf("For 2nd complex number:\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f%f", &num2.real,&num2.imag);

    sum= add(num1, num2);

    printf("\nSum: %0.2f + %0.2fi", sum.real, sum.imag);

    return 0;
}

complex add(complex c1, complex c2) {
    complex res;

    res.real = c1.real + c2.real;
    res.imag = c1.imag + c2.imag;

    return res;
}


// Program End
