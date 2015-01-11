#include <string>

#include "libop/op.h"


int main(int argc, char** argv) {
    uint64_t sum_squares = 0;
    uint64_t sum_n = 0;
    for (int i : op::range(101)) {
        sum_n += i;
        sum_squares += i*i;
    }

    op::print(sum_n*sum_n - sum_squares);

    return 0;
}
