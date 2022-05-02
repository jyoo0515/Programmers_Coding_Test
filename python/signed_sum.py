# https://programmers.co.kr/learn/courses/30/lessons/76501?language=python3

def solution(absolutes, signs):
    answer = 0
    for i in range(len(absolutes)):
        if (signs[i]):
            answer += absolutes[i]
        else:
            answer -= absolutes[i]
    return answer

# def solution(absolutes, signs):
#     answer=0
#     for absolute,sign in zip(absolutes,signs):
#         if sign:
#             answer+=absolute
#         else:
#             answer-=absolute
#     return answer
