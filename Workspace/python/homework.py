name = []
score = []

while True:
    n = input('이름을 입력하시오: ')
    s = input('점수를 입력하시오: ')

    if n == '':
        break

    name.append(n)
    score.append(s)

result = dict(zip(name, score))
print(result)
