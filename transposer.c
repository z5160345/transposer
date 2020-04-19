#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    char str[500];
    int i = 0;
    scanf("%s", str);
    int size = strlen(str);
    char input[size];
    char dupe[size];
    strcpy(input, str);
    strcpy(dupe, str);
    float count = 0;
    float coincidence = 0;
    for (int shift = 1; shift < size; shift++){
        for (i = 0; i < strlen(input) - shift; i++){
            if (input[i] == dupe[i+shift]){
                count++;
            }
        }
        coincidence += count*26/i;
        count = 0;
    }
    printf("%f", coincidence/size);
    return 0;
}