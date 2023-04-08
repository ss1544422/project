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
 * Last Modified Date: 05.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    float marks;
};

int main() {
    // Define an array of 5 students
    struct Student students[5];
    
    // Get information for each student
    printf("Enter information of students:\n");
    for (int i = 1; i <=5; i++) {
        printf("\nFor roll number:%d\n", i);
        printf("Enter first name:",i+1);
        scanf("%s", students[i].name);
        
        printf("Enter marks:",i+1);
        scanf("%f", &students[i].marks);
    }
    
    // Print the information for each student
    printf("Displaying information:\n");
    for (int i = 1; i <=5; i++) {
        printf("\nRoll number:%d\n", i);
        printf("First Name: %s\n Marks: %.f\n", students[i].name, students[i].marks);
    }
    
    return 0;
}


// Program End
