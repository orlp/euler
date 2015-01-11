#include "libop/op.h"


int main(int argc, char** argv) {
    for (int a : op::range(1, 1001)) {
        for (int b : op::range(1, 1001 - a)) {
            int c = 1000 - a - b;
            
            if (a*a + b*b == c*c) {
                op::print(a*b*c);
                return 0;
            }
        }
    }

    return 0;
}
