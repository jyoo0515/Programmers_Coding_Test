// https://programmers.co.kr/learn/courses/30/lessons/12934

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long double root = sqrt(n);
    if ((root - floor(root)) == 0) {
        return pow(floor(root) + 1, 2);
    } else {
        return -1;
    }
}
