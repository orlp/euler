#include <string>

#include "libop/op.h"


bool is_palindrome(int x) {
    std::string s = std::to_string(x);
    for (int i : op::range(s.size() / 2)) if (s[i] != s[s.size()-1 - i]) return false;
    return true;
}

int main(int argc, char** argv) {
    int solution = 0;

    for (int i : op::range(100, 1000)) {
        for (int j : op::range(i, 1000)) {
            if (is_palindrome(i*j)) solution = std::max(solution, i*j);
        }
    }

    op::print(solution);

    return 0;
}
