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
	char name[50];
	printf("Enter your name: ");
	scanf("%s",name);
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	double cgpa;
	printf("Enter your CGPA: ");
	scanf("%lf",&cgpa);
	printf("Mr. %s, you are %d years old and your CGPA is %4.2lf.Good Luck!\n",name,age,cgpa);
	return 0;
}


// Program End
