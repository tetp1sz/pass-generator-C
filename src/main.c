#include <stdio.h>
#include "pass_gen.h"

int main(void) {
    printf("// Enter 0 to keep the password length at the default (12 characters)\n\n");

    while(TRUE) {
        uint8_t pass_length;
        printf("\n[?] Enter password length: ");
        scanf("%d", &pass_length);

        if(pass_length == 0)
            pass_length = PASS_LENGTH;

        printf("[i] Your password: %s", generate_pass(pass_length));
    }

    return 0;
}