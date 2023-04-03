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
#include <ctype.h>

int main() {
    char str[] = "How are you";
    int vowels = 0, consonants = 0, alphabets = 0;
    printf("The given string is: %s\n",str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // Convert character to lowercase

        if (c >= 'a' && c <= 'z') { // Check if character is an alphabet
            alphabets++;

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++; // Count vowels
            } else {
                consonants++; // Count consonants
            }
        }
    }
    printf("Number of Alphabets in given string is : %d\n", alphabets);
    printf("Number of vowels in given string is: %d\n", vowels);
    printf("Number of consonents in given string is: %d\n", consonants);
    
    return 0;
}


// Program End
