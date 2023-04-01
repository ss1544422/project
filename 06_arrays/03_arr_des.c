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
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int size, temp;
    printf("Plz enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter array elements :\n", size);
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array in descending order is:\n");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// Program End
