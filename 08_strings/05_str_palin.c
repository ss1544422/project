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
 * Last Modified Date: 02.04.20223
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 0;

    printf("Enter your string for palindrome :");
    scanf("%s", str);

    len = strlen(str);
    printf("Entered string is:%s\n",str);

    for(i=0; i < len; i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Give string is in palindrome\n",str);
    else
        printf("Not in palindrome\n",str);

    return 0;
}


// Program End
