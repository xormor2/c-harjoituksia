#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    puts("Entering Lauri Shell 2023.");
    char param1[32], param2[32], joined_params[66];

    do {
        printf("lash$ ");
        scanf("%s", param1);

        if (!strcmp(param1, "exit")) {
            break;
        }

        scanf("%s", param2);
        puts(param1);
        puts(param2);

        strcpy(joined_params, param1);
        strcat(joined_params, " ");
        strcat(joined_params, param2);

        puts(joined_params);
        system(joined_params);
    } while (1);

    puts("Logged out of Lauri Shell");
    return 0;
}
