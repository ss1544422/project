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
#include <stdio.h>
int main() 
{
	int a = 50;      
	int b = 5;    
	int result = 0;   
	result = a | b;     // Binary AND Operator
	printf("Binary OR Operator of a and b is %d\n", result );      
	result = a & b;     // Binary AND Operator
	printf("Binary AND Operator of a and b is %d\n", result );
	result = a ^ b;     // Binary XOR Operator
	printf("Binary XOR Operator of a and b is %d\n", result );
	result = ~a;        // Binary Ones Complement Operator
	printf("Binary Ones Complement Operator of a is %d\n", result );
	result = a << 2;   // Binary Left Shift Operator
	printf("Binary Left Shift Operator of a is %d\n", result );
	result = a >> 2;   // Binary Right Shift Operator
	printf("Binary Right Shift Operator of a is %d\n", result );
	return 0;
}

// Program End
