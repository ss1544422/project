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
 * Author: Suraj Singh  ( ss1544422@gmail.com)
 * Title: Program Engineer
 * Last Modified Date: 08.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<ctype.h>

FILE *fp;
char filename[30];
int words =0;
int characters=0;
char c;
// Main Function
int main()
{
	printf("Input the filename to be opened : ");
	scanf("%s",filename);

	fp = fopen(filename,"r");

	if(fp == NULL)
	{
		printf("Error in the opening file \n");
		return 1;
	}
	while((c = fgetc(fp))!= EOF)
	{
		if(isspace(c))
		{
			words++;
		}
		else if(c >= 'A' && c <= 'z' || c >='a' && c <='z')
		{
			characters++;
		}
	}
	printf("The number of words in the  file test.txt are : %d\n",words);
	printf("The number of characters in the  file test.txt are: %d\n  ",characters);
    	fclose(fp);
       	return 0;
}
// Program End
