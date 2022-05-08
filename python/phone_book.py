# https://programmers.co.kr/learn/courses/30/lessons/42577


def solution(phone_book):
    phone_book.sort()
    for i in range(len(phone_book) - 1):
        if phone_book[i] == phone_book[i + 1][: len(phone_book[i])]:
            return False
    return True


# def solution(phoneBook):
#     phoneBook = sorted(phoneBook)

#     for p1, p2 in zip(phoneBook, phoneBook[1:]):
#         if p2.startswith(p1):
#             return False
#     return True
