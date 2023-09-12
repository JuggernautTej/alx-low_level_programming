#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char *user = getenv("USER");
    printf("USER: %s\n", user ? user : "null");
    return 0;
}
