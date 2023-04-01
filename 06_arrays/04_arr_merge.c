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
   int size1, size2, size3;
   int arr1[100], arr2[100], arr3[200];

   printf("Plz enter size of first array: ");
   scanf("%d", &size1);
   printf("enter the first array elements: ");

   for(int i = 0; i < size1; i++) {
      scanf("%d", &arr1[i]);
   }

   printf("Plz enter size of second array: ");
   scanf("%d", &size2);
   printf("enter the second array elements: ");

   for(int i = 0; i < size2; i++) {
      scanf("%d", &arr2[i]);
   }

   size3 = size1 + size2;

   for(int i = 0; i < size1; i++) {
      arr3[i] = arr1[i];
   }

   for(int i = 0, j = size1; i < size2; i++, j++) {
      arr3[j] = arr2[i];
   }

   printf("\nafter merging 1 and 2 array resultant array is: ");

   for(int i = 0; i < size3; i++) {
      printf("%d ", arr3[i]);
   }

   return 0;
}


// Program End
