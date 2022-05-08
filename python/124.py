# https://programmers.co.kr/learn/courses/30/lessons/12899

def solution(n):
    listNum = ['1', '2', '4']
    answer = ''
    while (n != 0):
        n -= 1
        answer = listNum[n % 3] + answer
        n = n // 3
    return answer
