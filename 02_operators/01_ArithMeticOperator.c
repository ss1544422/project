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
 * Title: Project Engineer
 * Last Modified Date: 29.03.2023
 *
/*********************************************************************************************/

// Header File
#include<stdio.h>
int main()
{
  int a = 10,b = 15, result;
  result = a+b;
  printf("Welcome to IOT Internship \n");  
  printf("Addition: a+b = %d \n",result);
  result = a-b;
  printf("Subtraction: a-b = %d \n",result);
  result = a*b;
  printf("Multiplication: a*b = %d \n",result);
  result = a/b;
  printf("Division: a/b = %d \n",result);
  result = a%b;
  printf("Modulo Division: %d \n",result);
  result = ++a;
  printf("Increment the value of a by 1: %d \n",result);
  result = --b;
  printf("Decremented the value of b by 1: %d \n",result);
  return 0;
}

// Program End
