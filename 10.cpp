#include "libop/op.h"


int main(int argc, char** argv) {
    std::vector<uint64_t> primes;
    op::primes_below(2000000, std::back_inserter(primes));
    op::print(std::accumulate(primes.begin(), primes.end(), 0ull));

    return 0;
}
