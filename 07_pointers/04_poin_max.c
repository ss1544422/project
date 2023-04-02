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
    int a, b, *ptr1, *ptr2, max;

    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;

    if (*ptr1 > *ptr2) {
        max = *ptr1;
    } else {
        max = *ptr2;
    }

    printf("%d is the maximum number. \n", max);

    return 0;
}

// Program End
