#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "pass_gen.h"


const char *ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-*/|?.,<>$#!@^()[]{}";

char *generate_pass(uint8_t pass_length) {
    srand(time(NULL));

    char *password = calloc(pass_length, sizeof(char));         // or malloc???

    for(uint8_t i = 0; i < pass_length; i++)
        password[i] = ALPHABET[rand() % strlen(ALPHABET)];      // we select random symbols from the entire alphabet

    return password;
}