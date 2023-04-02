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
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n\n", cht);

    printf("Using & operator:\n");
    printf("-----------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    printf("Using & and * operator:\n");
    printf("------------------------\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n\n", *(&cht));

    printf("Using only pointer variable:\n");
    printf("-----------------------------\n");
    int *ptr_m = &m;
    float *ptr_fx = &fx;
    char *ptr_cht = &cht;
    printf("address of m = %p\n", ptr_m);
    printf("address of fx = %p\n", ptr_fx);
    printf("address of cht = %p\n\n", ptr_cht);

    printf("Using only pointer operator:\n");
    printf("-----------------------------\n");
    printf("value at address of m = %d\n", *ptr_m);
    printf("value at address of fx = %f\n", *ptr_fx);
    printf("value at address of cht = %c\n", *ptr_cht);

    return 0;
}



// Program End
