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
 * Title: Program Engineer   (ss1544422@gmail.com)
 * Last Modified Date: 07.04.20233
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     FILE *fp;
     char name[50];

     fp = fopen("name.txt","w");

     printf("Enter your name : ");
     scanf("%[^\n]s",name);

     fprintf(fp,"name : %s\n",name);

     fclose(fp);
     return 0;
}


// Program End
