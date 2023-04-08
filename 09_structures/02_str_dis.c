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

struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;
    
    printf("Enter the 1st distance \n");
    printf("Enter Feet: ");
    scanf("%d", &d1.feet);
    printf("Enter Inches: ");
    scanf("%f", &d1.inches);
    
    printf("Enter the 2nd distance \n");
    printf("Enter Feet: ");
    scanf("%d", &d2.feet);
    printf("Enter Inches: ");
    scanf("%f", &d2.inches);
    
    sum.inches = d1.inches + d2.inches;
    sum.feet = d1.feet + d2.feet;
    
    if (sum.inches >= 12) {
        sum.inches -= 12;
        sum.feet++;
    }
    printf("Sum of the distances = %d feet %f inches.\n", sum.feet, sum.inches);
    
    return 0;
}


// Program End
