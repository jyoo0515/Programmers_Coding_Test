// https://programmers.co.kr/learn/courses/30/lessons/67256?language=cpp

#include <string>
#include <vector>
#include <map>

using namespace std;

map<pair<int, int>, int> dist = {
    {{1, 2}, 1}, {{1, 5}, 2}, {{1, 8}, 3}, {{1, 0}, 4},
    {{2, 2}, 0}, {{2, 5}, 1}, {{2, 8}, 2}, {{2, 0}, 3},
    {{3, 2}, 1}, {{3, 5}, 2}, {{3, 8}, 3}, {{3, 0}, 4},
    {{4, 2}, 2}, {{4, 5}, 1}, {{4, 8}, 2}, {{4, 0}, 3},
    {{5, 2}, 1}, {{5, 5}, 0}, {{5, 8}, 1}, {{5, 0}, 2},
    {{6, 2}, 2}, {{6, 5}, 1}, {{6, 8}, 2}, {{6, 0}, 3},
    {{7, 2}, 3}, {{7, 5}, 2}, {{7, 8}, 1}, {{7, 0}, 2},
    {{8, 2}, 2}, {{8, 5}, 1}, {{8, 8}, 0}, {{8, 0}, 1},
    {{9, 2}, 3}, {{9, 5}, 2}, {{9, 8}, 1}, {{9, 0}, 2},
    {{0, 2}, 3}, {{0, 5}, 2}, {{0, 8}, 1}, {{0, 0}, 0},
    {{-1, 2}, 4}, {{-1, 5}, 3}, {{-1, 8}, 2}, {{-1, 0}, 1},
    {{-2, 2}, 4}, {{-2, 5}, 3}, {{-2, 8}, 2}, {{-2, 0}, 1},
};

string solution(vector<int> numbers, string hand) {
    int leftLoc = -1;
    int rightLoc = -2;
    string answer = "";
    
    for (int num : numbers) {
        if (num == 1 || num == 4 || num == 7) {
            answer.push_back('L');
            leftLoc = num;
        } else if (num == 3 || num == 6 || num == 9) {
            answer.push_back('R');
            rightLoc = num;
        } else {
            int leftDist = dist.find(make_pair(leftLoc, num))->second;
            int rightDist = dist.find(make_pair(rightLoc, num))->second;
            
            if (leftDist == rightDist) {
                if (hand == "left") {
                    answer.push_back('L');
                    leftLoc = num;
                } else {
                    answer.push_back('R');
                    rightLoc = num;
                }
            } else if (leftDist < rightDist) {
                answer.push_back('L');
                leftLoc = num;
            } else {
                answer.push_back('R');
                rightLoc = num;
            }
        }
    }
    
    return answer;
}