# https://programmers.co.kr/learn/courses/30/lessons/62048

def solution(w, h):
    answer = (w * h) - (abs(w - h) ** 2)
    return answer


print(solution(8, 12))
