// https://programmers.co.kr/learn/courses/30/lessons/12935

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) {
        return {-1};
    }
    auto itr = min_element(arr.begin(), arr.end());
    arr.erase(itr);
    return arr;
}
