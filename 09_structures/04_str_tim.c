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
 * Last Modified Date: 04.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct time {
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct time t1, struct time t2, struct time *diff);

int main() {
   struct time startTime, stopTime, diff;

   printf("Enter the start time.\n");
   printf("Enter hours, minutes, and seconds: ");
   scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

   printf("Enter the stop time.\n");
   printf("Enter hours, minutes, and seconds: ");
   scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

   differenceBetweenTimePeriod(startTime, stopTime, &diff);

   printf("\nTime Difference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

   return 0;
}

void differenceBetweenTimePeriod(struct time t1, struct time t2, struct time *diff) {
   if (t2.seconds > t1.seconds) {
      --t1.minutes;
      t1.seconds += 60;
   }

   diff->seconds = t1.seconds - t2.seconds;

   if (t2.minutes > t1.minutes) {
      --t1.hours;
      t1.minutes += 60;
   }

   diff->minutes = t1.minutes - t2.minutes;
   diff->hours = t1.hours - t2.hours;
}


// Program End
