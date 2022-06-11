# https://programmers.co.kr/learn/courses/30/lessons/77484


def getRank(numCorrect):
    if numCorrect == 0:
        return 6
    else:
        return 6 - numCorrect + 1


def solution(lottos, win_nums):
    answer = []
    numZero = 0
    wrongNum = 0

    for i in lottos:
        if i == 0:
            numZero += 1
        elif i not in win_nums:
            wrongNum += 1

    answer.append(getRank(6 - wrongNum))
    answer.append(getRank(6 - wrongNum - numZero))

    return answer


# def solution(lottos, win_nums):

#     rank=[6,6,5,4,3,2,1]

#     cnt_0 = lottos.count(0)
#     ans = 0
#     for x in win_nums:
#         if x in lottos:
#             ans += 1
#     return rank[cnt_0 + ans],rank[ans]


# def solution(lottos, win_nums):
#     rank = {
#         0: 6,
#         1: 6,
#         2: 5,
#         3: 4,
#         4: 3,
#         5: 2,
#         6: 1
#     }
#     return [rank[len(set(lottos) & set(win_nums)) + lottos.count(0)], rank[len(set(lottos) & set(win_nums))]]
