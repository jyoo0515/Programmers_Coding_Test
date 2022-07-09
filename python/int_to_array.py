# https://school.programmers.co.kr/learn/courses/30/lessons/12932


def solution(n):
    answer = []
    for c in reversed(str(n)):
        answer.append(int(c))
    return answer


# def digit_reverse(n):
#     return list(map(int, reversed(str(n))))
