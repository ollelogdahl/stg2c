#include <stdio.h>
#include <unistd.h>

const char *help =
"usage: stg2c <options> [file]\n"
"   -h          Displays help prompt.\n"
"   -v          Prints verbosely.\n"
"   -W          Prints all warnings.\n"
"   -N          Don't print date of generation,\n"
"               nor any header text.\n"
"For more details, see stg2c(x).";

const char *help_short =
"usage: stg2c <options> [file]\n"
"For more details, see stg2c(x).";

int main(int argc, char *argv[]) {

    int opt;
    while((opt = getopt(argc, argv, ":hv")) != EOF) {
        switch (opt) {
            case 'h': printf(help); return 0;

            case ':': printf("Option needs a value.\n"); return 1;
            case '?': printf("Unknown option %c\n%s", optopt, help_short); return 1;
        }
    }
    if (argv[optind] == NULL) {
        printf("Mandatory file argument missing.\n");
        printf(help_short);
        return 1;
    }
};
