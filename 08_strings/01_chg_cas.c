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
#include <string.h>
#include <ctype.h>

int main() {
   char str[] = "PHYTEC";
   int i;

   printf("%s\n", str);

   for (i = 0; str[i]; i++) {
      if (isupper(str[i])) {
         str[i] = tolower(str[i]);
      }
      else if (islower(str[i])) {
         str[i] = toupper(str[i]);
      }
   }

   printf("the changed case is : %s\n", str);

   return 0;
}



// Program End
