#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *human_readable_time (unsigned seconds, char *time_string)
{
    char cache[2];
    int time;

    time = seconds/3600;
    sprintf(cache,"%02d:",time);
    strcat(time_string, cache);
    seconds %= 3600;

    time = seconds/60;
    sprintf(cache,"%02d:",time);
    strcat(time_string, cache);
    seconds %= 60;

    time = seconds%60;
    sprintf(cache,"%02d",time);
    strcat(time_string, cache);

    time_string[strlen(time_string)] = '\0';
    return time_string;
 
}

int main(){
    char str[9];
    printf("%s",human_readable_time(214724, str));
}