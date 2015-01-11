#include "libop/op.h"


int main(int argc, char** argv) {
    int sum = 0;
    int a = 1;
    int b = 2;

    while (b <= 4000000) {
        if (b % 2 == 0) sum += b;
        
        int tmp = b;
        b += a;
        a = tmp;
    }

    op::print(sum);

    return 0;
}
