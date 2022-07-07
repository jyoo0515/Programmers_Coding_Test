# https://school.programmers.co.kr/learn/courses/30/lessons/12931


def solution(n):
    answer = 0
    for i in str(n):
        answer += int(i)

    return answer


# def sum_digit(number):
#     if number < 10:
#         return number;
#     return (number % 10) + sum_digit(number // 10)


# def sum_digit(number):
#     return sum([int(i) for i in str(number)])
