# https://programmers.co.kr/learn/courses/30/lessons/70128

def solution(a, b):
    answer = 0
    for c, d in zip(a, b):
        answer += c * d
    return answer


# def solution(a, b):
#     return sum([x*y for x, y in zip(a, b)])

# solution = lambda x, y: sum(a*b for a, b in zip(x, y))
