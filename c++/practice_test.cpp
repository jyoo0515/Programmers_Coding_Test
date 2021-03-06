// https://programmers.co.kr/learn/courses/30/lessons/42840

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    int cntOne = 0;
    int cntTwo = 0;
    int cntThree = 0;
    vector<int> arrOne = {1, 2, 3, 4, 5};
    vector<int> arrTwo = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> arrThree = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    auto itr1 = arrOne.begin();
    auto itr2 = arrTwo.begin();
    auto itr3 = arrThree.begin();

    for (int num : answers)
    {
        if (num == *itr1)
        {
            cntOne++;
        }
        if (num == *itr2)
        {
            cntTwo++;
        }
        if (num == *itr3)
        {
            cntThree++;
        }

        if (itr1 == arrOne.end() - 1)
        {
            itr1 = arrOne.begin();
        }
        else
        {
            itr1++;
        }
        if (itr2 == arrTwo.end() - 1)
        {
            itr2 = arrTwo.begin();
        }
        else
        {
            itr2++;
        }
        if (itr3 == arrThree.end() - 1)
        {
            itr3 = arrThree.begin();
        }
        else
        {
            itr3++;
        }
    }

    int maxCnt = max({cntOne, cntTwo, cntThree});
    if (cntOne == maxCnt)
    {
        answer.push_back(1);
    }
    if (cntTwo == maxCnt)
    {
        answer.push_back(2);
    }
    if (cntThree == maxCnt)
    {
        answer.push_back(3);
    }
    sort(answer.begin(), answer.end());
    return answer;
}

// vector<int> one = {1, 2, 3, 4, 5};
// vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
// vector<int> thr = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

// vector<int> solution(vector<int> answers)
// {
//     vector<int> answer;
//     vector<int> they(3);
//     for (int i = 0; i < answers.size(); i++)
//     {
//         if (answers[i] == one[i % one.size()])
//             they[0]++;
//         if (answers[i] == two[i % two.size()])
//             they[1]++;
//         if (answers[i] == thr[i % thr.size()])
//             they[2]++;
//     }
//     int they_max = *max_element(they.begin(), they.end());
//     for (int i = 0; i < 3; i++)
//     {
//         if (they[i] == they_max)
//             answer.push_back(i + 1);
//     }
//     return answer;
// }