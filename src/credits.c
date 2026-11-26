#include <stdio.h>

#ifndef BAKERAIN_DEVELOPE_R
#define BAKERAIN_DEVELOPE_R "kok3shidoll"
#endif
#define THE_PLUSH "Ploosh"
#define NEKO_DEVELOPE_R "HAHALOSAH"

void print_credits(void) {
    fprintf(stderr,
        "# TRra1n: " BUILD_TAG " - TRfree fork\n"
        "# Maintained by: TRfree (https://www.trfree.org)\n"
        "# Original project: palera1n (https://github.com/palera1n/palera1n)\n"
        "# Original authors: Nick Chan, " THE_PLUSH ", Khcrysalis, Mineek, staturnz, "
        BAKERAIN_DEVELOPE_R ", " NEKO_DEVELOPE_R "\n"
        "# Thanks to: llsc12, Nebula, Lrdsnow, nikias (libimobiledevice),\n"
        "# checkra1n team, Procursus Team, and all upstream contributors.\n"
        "# TRfree is responsible only for changes in this fork.\n\n");
}
