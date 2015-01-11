#include <string>

#include "libop/op.h"


int main(int argc, char** argv) {
    uint64_t solution = 1;
    for (int i : op::range(1, 21)) {
        solution = op::lcm(solution, i);
    }

    op::print(solution);

    return 0;
}
