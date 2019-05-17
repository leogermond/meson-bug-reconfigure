#include <string.h>
#include <stdio.h>
#include "config.h"

#define XSTR(s) #s
#define STR(s) XSTR(s)

int main() {
    return !!strcmp(STR(PRINT), "good");
}
