# https://programmers.co.kr/learn/courses/30/lessons/12934


import math


def solution(n):
    root = math.floor(math.sqrt(n))
    if math.sqrt(n) - root == 0:
        return (root + 1) ** 2
    else:
        return -1


# def nextSqure(n):
#     sqrt = n ** (1/2)

#     if sqrt % 1 == 0:
#         return (sqrt + 1) ** 2
#     return -1
