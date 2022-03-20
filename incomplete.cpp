// https://programmers.co.kr/learn/courses/30/lessons/42576?language=cpp

#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    unordered_multiset<string> ms;
    for (string part : participant)
    {
        ms.insert(part);
    }

    for (string comp : completion)
    {
        auto itr = ms.find(comp);
        if (itr != ms.end())
        {
            ms.erase(itr);
        }
    }

    return *ms.begin();
}

// string solution(vector<string> participant, vector<string> completion)
// {
//     unordered_multiset<string> partSet, compSet;

//     const int n = participant.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         partSet.insert(participant[i]);
//         compSet.insert(completion[i]);
//     }
//     partSet.insert(participant[n - 1]);

//     string answer = "";
//     for (string part : participant)
//     {
//         if (partSet.count(part) != compSet.count(part))
//         {
//             answer = part;
//             break;
//         }
//     }

//     return answer;
// }