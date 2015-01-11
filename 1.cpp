#include "libop/op.h"

int main(int argc, char** argv) {
    int sum = 0;

    for (int i : op::range(3, 1000)) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }

    op::print(sum);

    return 0;
}
