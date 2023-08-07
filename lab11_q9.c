#include <stdio.h>

struct time {
   int seconds;
   int minutes;
   int hours;
};

void timeinterval(struct time t1,
                                 struct time t2,
                                 struct time *diff);

int main() {
   struct time stp, strt, diff;
   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &strt.hours,
         &strt.minutes,
         &strt.seconds);
   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stp.hours,
         &stp.minutes,
         &stp.seconds);
   timeinterval(stp, strt, &diff);
   printf("\nTime Difference: %d:%d:%d - ", stp.hours,
          stp.minutes,
          stp.seconds);
   printf("%d:%d:%d ", strt.hours,
          strt.minutes,
          strt.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   return 0;
}

void timeinterval(struct time stop,
                                 struct time start,
                                 struct time *diff) {
   while (start.seconds > stop.seconds) {
      --stop.minutes;
      stop.seconds += 60;
   }
   diff->seconds = stop.seconds - start.seconds;
   while (start.minutes > stop.minutes) {
      --stop.hours;
      stop.minutes += 60;
   }
   diff->minutes = stop.minutes - start.minutes;
   diff->hours = stop.hours - start.hours;
}