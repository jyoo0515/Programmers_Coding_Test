# https://programmers.co.kr/learn/courses/30/lessons/42579


def solution(genres, plays):
    answer = []
    songDic = {}
    for i in range(len(genres)):
        if genres[i] not in songDic:
            songDic[genres[i]] = {i: plays[i]}
        else:
            songDic[genres[i]][i] = plays[i]

    songDic = dict(
        sorted(songDic.items(), key=lambda item: sum(item[1].values()), reverse=True)
    )
    for k, v in songDic.items():
        songDic[k] = dict(sorted(v.items(), key=lambda item: item[0]))
        songDic[k] = dict(sorted(v.items(), key=lambda item: item[1], reverse=True))

        if len(songDic[k]) < 2:
            answer.append(list(songDic[k].keys())[0])
        else:
            answer.append(list(songDic[k].keys())[0])
            answer.append(list(songDic[k].keys())[1])
    return answer


# def solution(genres, plays):
#     answer = []
#     d = {e:[] for e in set(genres)}
#     for e in zip(genres, plays, range(len(plays))):
#         d[e[0]].append([e[1] , e[2]])
#     genreSort =sorted(list(d.keys()), key= lambda x: sum( map(lambda y: y[0],d[x])), reverse = True)
#     for g in genreSort:
#         temp = [e[1] for e in sorted(d[g],key= lambda x: (x[0], -x[1]), reverse = True)]
#         answer += temp[:min(len(temp),2)]
#     return answer
