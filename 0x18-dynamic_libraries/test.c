#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("9 8 10 24 75 +9\n");
    write(1, "Congratulations, you won the jackpot!\n", 38);
    exit(EXIT_SUCCESS);
}
