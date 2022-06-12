// https://programmers.co.kr/learn/courses/30/lessons/12946

#include <string>
#include <vector>

using namespace std;

void hanoi(int n, int from, int to, vector<vector<int>> &answer)
{
    if (n <= 0)
        return;

    int aux = 6 - from - to;
    hanoi(n - 1, from, aux, answer);
    answer.push_back({from, to});
    hanoi(n - 1, aux, to, answer);
}

vector<vector<int>> solution(int n)
{
    vector<vector<int>> answer;
    hanoi(n, 1, 3, answer);
    return answer;
}