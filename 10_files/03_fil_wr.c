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
 * Author: Suraj Singh ( ss1544422@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 07.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	FILE *fp;
	int i,n;
	char str[500];
	char fname[]="suraj.txt";
	char str1;

	printf("Write multiple lines in a text file and read the file\n");
	printf("------------------------------------------------------\n");
	
	printf("Input the number of lines to be written : ");
	scanf("%d",&n);
     printf(":: The lines are ::\n");
	fp = fopen(fname,"w");
	for(i=0;i<n+1;i++)
	{
         //sent to and read by a program. 
		fgets(str,sizeof str,stdin);
		fputs(str,fp);
	}
	fclose(fp);

	//read file
	fp =fopen(fname,"r");
	str1 = fgetc(fp);
	while(str1 != EOF)
	{
		printf("%c",str1);
		str1 = fgetc(fp);
	}
	printf("\n\n");
	fclose(fp);
	return 0;

}

// Program End
