#include <stdlib.h>
#include "ifaddrs.h"

int
getifaddrs(struct ifaddrs **ifap)
{
        return (0);
}

void
freeifaddrs(struct ifaddrs *ifa)
{
        free(ifa);
}

