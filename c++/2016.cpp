// https://programmers.co.kr/learn/courses/30/lessons/12901

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> days = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
vector<int> thrityOnes = {1, 3, 5, 7, 8, 10, 12};

string solution(int a, int b)
{
    int count = 0;
    for (int i = 1; i < a; i++)
    {
        if (i == 2)
            count += 29;
        else if (find(thrityOnes.begin(), thrityOnes.end(), i) != thrityOnes.end())
            count += 31;
        else
            count += 30;
    }
    count += b;
    return days[(count - 1) % 7];
}