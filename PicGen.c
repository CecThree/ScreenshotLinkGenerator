#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    srand(getpid());

    int num;
    int numsLen;

    char nums[5];

    char zero1[5] = "0";
    char zero2[5] = "00";
    char zero3[5] = "000";

    char randomletter[2];
    randomletter[1] = '\0';

    char randomletter2[2];
    randomletter[1] = '\0';

    char link[20];

    num = rand() / (RAND_MAX / (9999 + 1) + 1);
    randomletter[0] = 'a' + (rand() % 26);
    randomletter2[0] = 'a' + (rand() % 26);

    itoa(num, nums, 10);

    numsLen = strlen(nums);

    switch(numsLen) {
      case 3 :
        strcat(zero1, nums);
        strcpy(nums,zero1);
        break;
      case 2 :
        strcat(zero2, nums);
        strcpy(nums,zero2);
        break;
      case 1 :
        strcat(zero3, nums);
        strcpy(nums,zero3);
        break;
   }

    strcat(link, "start ");
    strcat(link, "https://prnt.sc/");
    strcat(link, randomletter);
    strcat(link, randomletter2);
    strcat(link, nums);

    printf(link);

    system(link);
}

