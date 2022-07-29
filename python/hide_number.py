# https://school.programmers.co.kr/learn/courses/30/lessons/12948


def solution(phone_number):
    return "*" * (len(phone_number) - 4) + phone_number[-4:]


# import re

# def solution(phone_number):
#     p = re.compile(r'\d(?=\d{4})')
#     return p.sub("*", phone_number, count = 0)
