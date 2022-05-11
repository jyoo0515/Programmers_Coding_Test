# https://programmers.co.kr/learn/courses/30/lessons/42586

import math


def solution(progresses, speeds):
    answer = []
    daysLeft = []
    for i in range(len(progresses)):
        remainder = 100 - progresses[i]
        daysLeft.append(math.ceil(remainder / speeds[i]))

    cnt = 1
    bottleNeck = daysLeft.pop(0)
    while len(daysLeft) > 0:
        if bottleNeck < daysLeft[0]:
            answer.append(cnt)
            bottleNeck = daysLeft.pop(0)
            cnt = 1
        else:
            cnt += 1
            daysLeft.pop(0)
    answer.append(cnt)

    return answer


# def solution(progresses, speeds):
#     Q=[]
#     for p, s in zip(progresses, speeds):
#         if len(Q)==0 or Q[-1][0]<-((p-100)//s):
#             Q.append([-((p-100)//s),1])
#         else:
#             Q[-1][1]+=1
#     return [q[1] for q in Q]
