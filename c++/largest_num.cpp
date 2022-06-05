// https://programmers.co.kr/learn/courses/30/lessons/42746

#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

string solution(vector<int> numbers)
{
    string answer = "";
    vector<pair<string, int>> arr;
    for (int n : numbers)
    {
        string tmp = "";
        string num = to_string(n);
        for (int i = 0; i < 4; i++)
            tmp += num;
        arr.push_back(make_pair(tmp.substr(0, 4), num.length()));
    }
    sort(arr.begin(), arr.end(), greater<>());

    if (arr[0].first == "0000")
        return "0";

    for (pair<string, int> p : arr)
        answer += p.first.substr(0, p.second);

    return answer;
}

// #include <algorithm>
// #include <string>
// #include <vector>

// using namespace std;

// bool compare(const string &a, const string &b)
// {
//     if (b + a < a + b)
//         return true;
//     return false;
// }

// string solution(vector<int> numbers) {
//     string answer = "";

//     vector<string> strings;

//     for (int i : numbers)
//         strings.push_back(to_string(i));

//     sort(strings.begin(), strings.end(), compare);

//     for (auto iter = strings.begin(); iter < strings.end(); ++iter)
//         answer += *iter;

//     if (answer[0] == '0')
//         answer = "0";

//     return answer;
// }