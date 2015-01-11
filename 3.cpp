#include <algorithm>

#include "libop/op.h"


int main(int argc, char** argv) {
    auto factors = op::prime_factors(600851475143);
    op::print(*std::max_element(factors.begin(), factors.end()));

    return 0;
}
