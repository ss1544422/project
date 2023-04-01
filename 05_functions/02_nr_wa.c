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
#include<stdio.h>

void sum (int, int );

int main ()
{
   int a,b;
   printf("enter 2 numbers :");
   scanf("%d%d", &a,&b);
   sum (a,b);
   return 0;
}

void sum ( int a, int b)
{
   int c;
   c= a+b;
   printf ("sum=%d\n", c);
}

// Program End
