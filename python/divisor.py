# https://programmers.co.kr/learn/courses/30/lessons/77884?language=python3

from math import floor, sqrt


def evenDivisor(num):
    cnt = 0
    for i in range(1, floor(sqrt(num)) + 1):
        if (num % i == 0):
            cnt += 1
            if (i * i < num):
                cnt += 1
    return cnt % 2 == 0


def solution(left, right):
    answer = 0
    for x in range(left, right + 1):
        if (evenDivisor(x)):
            answer += x
        else:
            answer -= x

    return answer


# def solution(left, right):
#     answer = 0
#     for i in range(left,right+1):
#         if int(i**0.5)==i**0.5:
#             answer -= i
#         else:
#             answer += i
#     return answer
