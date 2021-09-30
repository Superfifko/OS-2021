#include "kernel/types.h"
#include "user/user.h"
#include "kernel/stat.h"

int
main(int argc, char* argv[])
{
    int ticks;

    if (argc != 2){

        fprintf(2, "sleep usage: sleep <ticks>\n");}

    ticks = atoi(argv[1]);

    sleep(ticks);

    exit(0);


}
