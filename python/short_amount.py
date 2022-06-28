# https://programmers.co.kr/learn/courses/30/lessons/82612


def solution(price, money, count):
    answer = 0
    sum = 0
    for i in range(1, count + 1):
        sum += i * price
    if sum > money:
        answer = sum - money

    return answer


# def solution(price, money, count):
#     return max(0,price*(count+1)*count//2-money)
