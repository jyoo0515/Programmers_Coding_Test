// https://programmers.co.kr/learn/courses/30/lessons/42895

#include <string>
#include <vector>
#include <set>
#include <cmath>

#define MAX 8

using namespace std;

void calculate(vector<set<int>> &setList, int i, int x, int y)
{
    for (int num1 : setList[x])
    {
        for (int num2 : setList[y])
        {
            setList[i].insert(num1 + num2);
            setList[i].insert(num1 - num2);
            setList[i].insert(num1 * num2);
            if (num2 != 0)
                setList[i].insert(num1 / num2);
        }
    }
}

int solution(int N, int number)
{
    if (number == N)
        return 1;

    vector<set<int>> setList(MAX + 1);
    setList[1] = {N};
    for (int i = 2; i <= MAX; i++)
    {
        for (int j = 1; j <= i / 2; j++)
        {
            calculate(setList, i, i - j, j);
            calculate(setList, i, j, i - j);
        }

        int repeated = 0;
        for (int j = 0; j < i; j++)
            repeated += N * (int)pow(10, j);
        setList[i].insert(repeated);

        if (setList[i].find(number) != setList[i].end())
            return i;
    }

    return -1;
}

// #include <string>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// int N;
// unordered_set<int> cache[10];
// unordered_set<int> solve(int n) {
//     if (!cache[n].empty()) return cache[n];
//     int num = 0;
//     for (int i = 0; i < n; i++) num = 10 * num + N;
//     unordered_set<int> res;
//     res.insert(num);
//     for (int i = 1; i < n; i++) {
//         int j = n - i;
//         auto s1 = solve(i);
//         auto s2 = solve(j);
//         for (int n1 : s1) {
//             for (int n2 : s2) {
//                 res.insert(n1 + n2);
//                 res.insert(n1 - n2);
//                 res.insert(n1 * n2);
//                 if (n2 != 0) res.insert(n1 / n2);
//             }
//         }
//     }
//     return cache[n] = res;
// }

// int solution(int _N, int number) {
//     N = _N;
//     for (int i = 1; i <= 8; i++) {
//         solve(i);
//         if (cache[i].find(number) != cache[i].end()) return i;
//     }
//     return -1;
// }