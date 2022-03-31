// https://programmers.co.kr/learn/courses/30/lessons/17681

#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;
    for (int i = 0; i < arr1.size(); i++)
    {
        string first = bitset<16>(arr1[i]).to_string();
        string second = bitset<16>(arr2[i]).to_string();
        string row = "";
        for (int j = 16 - n; j < 16; j++)
        {
            if (first[j] == '1' || second[j] == '1')
                row += "#";
            else
                row += " ";
        }
        answer.push_back(row);
    }
    return answer;
}