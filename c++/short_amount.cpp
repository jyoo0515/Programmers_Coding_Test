// https://programmers.co.kr/learn/courses/30/lessons/82612

using namespace std;

long long solution(int price, int money, int count)
{
    long long sum = 0;
    for (long long i = 1; i <= count; i++)
    {
        sum += i * price;
    }
    if (sum > money)
        return sum - money;
    else
        return 0;
}

// typedef long long ll;

// long long solution(int price, int money, int count)
// {
//     ll answer = (ll)(count * (count+1) / 2) * price;
//     return answer > money ? answer - money : 0;
// }