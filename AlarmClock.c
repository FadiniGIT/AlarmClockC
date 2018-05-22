//# => AlarmClock.c
//# => Basic Alarm Clock written c
//# => Author: Fadini
//# => 5/21/2018

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]){
   
    int userHour, userMinute, timeHour = 0, amPM = 0, i = 0, twelveTime = 0;

    time_t now;
    struct tm *now_tm;
    int hour;
    int minute;

    printf("Alarm Clock\n");
    printf("24 or 12 hr time?\n");
    scanf("%d", &timeHour);
    if (timeHour == 12){
        printf("(1) AM/ (2) PM\n");
        scanf("%d", &amPM);
    }
    printf("What hour should you be alerted?\n");
    scanf("%d", &userHour);
    printf("What minute should you be alerted\n");
    scanf("%d", &userMinute);

    if (timeHour == 12 && amPM == 2){
        twelveTime = userHour;
        userHour+=12;
    }

    if (timeHour == 12){
        if (userMinute < 10){
            printf("Alarm set for %d:0%d\n", twelveTime, userMinute);
        }else{
            printf("Alarm set for %d:%d\n", twelveTime, userMinute);
        }

    }else{
        if (userMinute < 10){
            printf("Alarm set for %d:0%d\n", userHour, userMinute);
        }else{
            printf("Alarm set for %d:%d\n", userHour, userMinute);
        }
    }

    while (i < 1) {
        now = time(NULL);
        now_tm = localtime(&now);
        hour = now_tm->tm_hour;
        minute = now_tm->tm_min;
        
        if (hour == userHour && minute == userMinute) {
            printf("Alarm\n");
            //play sound?
            i+=1;
            
        }else {
        }
    }
    return 0;
}

