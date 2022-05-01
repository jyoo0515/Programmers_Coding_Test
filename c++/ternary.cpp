// https://programmers.co.kr/learn/courses/30/lessons/68935

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string decToTern(int n)
{
    string ret;
    while (n != 0)
    {
        int remainder = n % 3;
        ret = to_string(remainder) + ret;
        n /= 3;
    }
    return ret;
}

int ternToDec(string n)
{
    int ret = 0;
    for (int i = 0; i < n.size(); i++)
        ret += (n[n.size() - i - 1] - '0') * pow(3, i);
    return ret;
}

int solution(int n)
{
    string ternary = decToTern(n);
    reverse(ternary.begin(), ternary.end());
    return ternToDec(ternary);
}

// int solution(int n) {
//     int answer = 0;
//     vector<int> v;
//     while(n > 0){
//         v.push_back(n%3);
//         n/=3;
//     }
//     int k = 1;
//     while(!v.empty()) {
//         answer += k*v.back();
//         v.pop_back();
//         k*=3;
//     }

//     return answer;
// }