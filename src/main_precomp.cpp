#ifdef PRECOMP

#include <iostream>
#include <cstdlib>

#include "amgif.h"
#include "persist_c.h"


int main() {
    std::cout << "   -=- +   Computing operator C   + -=-" << std::endl;

    computeC();

    return EXIT_SUCCESS;
}

#endif