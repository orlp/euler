#include "libop/op.h"


int main(int argc, char** argv) {
    int n = 1;
    int i = 2;

    while (n < 10001) if (op::isprime(++i)) ++n;
    
    op::print(i);



    return 0;
}
