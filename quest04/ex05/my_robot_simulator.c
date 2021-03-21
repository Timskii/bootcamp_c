#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* my_robot_simulator(char* param_1)
{
    int x=0, y=0, size=100;
    char* bearing;
    char* buffer;

    buffer = (char*)malloc(size*sizeof(char));
    bearing = (char*)malloc(6*sizeof(char));

    strcpy(bearing,"north");

    for (int i=0; i< strlen(param_1); i++){
        if (param_1[i] == 'A'){
            if(strcmp(bearing,"north")==0) {
                y--;
            }else if(strcmp(bearing,"east")==0) {
                x++;
            }else if(strcmp(bearing,"south")==0) {
                y++;
            }else if(strcmp(bearing,"west")==0) {
                x--;
            }

        } else if (param_1[i] == 'R'){
            if (strcmp(bearing,"north")==0) {
                strcpy(bearing,"east");
            } else if (strcmp(bearing,"east")==0) {
                strcpy(bearing,"south");
            } else if (strcmp(bearing,"south")==0) {
                strcpy(bearing,"west");
            } else if (strcmp(bearing,"west")==0) {
                strcpy(bearing,"north");
            }
        } else if (param_1[i] == 'L'){
            if(strcmp(bearing,"north")==0) {
                strcpy(bearing,"west");
            } else if (strcmp(bearing,"east")==0) {
                strcpy(bearing,"north");
            } else if (strcmp(bearing,"south")==0) {
                strcpy(bearing,"east");
            } else if (strcmp(bearing,"west")==0) {
                strcpy(bearing,"south");
            }
        }
    }

    snprintf(buffer, size, "{x: %d, y: %d, bearing: '%s'}", x, y, bearing); 
    return buffer;
}