// https://programmers.co.kr/learn/courses/30/lessons/64061?language=cpp

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    stack<int> st;
    int answer = 0;

    for (int move : moves)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][move - 1] != 0)
            {
                if (!st.empty())
                {
                    if (st.top() == board[i][move - 1])
                    {
                        st.pop();
                        answer += 2;
                    }
                    else
                    {
                        st.push(board[i][move - 1]);
                    }
                }
                else
                {
                    st.push(board[i][move - 1]);
                }
                board[i][move - 1] = 0;
                break;
            }
        }
    }

    return answer;
}