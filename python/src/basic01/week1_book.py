import turtle as t
import time
import random

for x in range(10):
    print('Hello')  # 들여쓰기를 통해 for 문의 블록을 체크한다
print('bye')  # for 문 종료

'''
distance = 100
triangleDegree = 120
# 삼각형 그리기
t.color('aqua')
for x in range(3):
    t.fd(distance)
    t.left(triangleDegree)

# 사각형 그리기
triangleDegree = 90
t.color('blue')
for x in range(4):
    t.fd(distance)
    t.left(triangleDegree)
    
# range (기본 0부터 시작해서, 2번쨰 숫자의 앞자리까지)
print(list(range(5)), list(range(1, 10)))
print('[0-4]')
for x in range(5):
    print(x)
print('[1-10]')
for x in range(1, 11):
    print(x)

# 오각형그리기
n = 5
t.color('purple')
t.begin_fill()
for x in range(n):
    t.fd(50)
    t.left(360/n)
t.end_fill()

# 이쁜 원
n = 50
t.bgcolor('black')
t.color('green')
t.speed(0)
for x in range(n):
    t.circle(80)
    t.lt(360/n)

# 이쁜 사각형
angle = 89 # 각도에 따라 이쁘게 나타남
t.bgcolor('black')
t.color('yellow')
t.speed(0)
for x in range(200):
    t.fd(x)
    t.lt(angle)
t.done() # 화면 안닫고 유지
'''
'''
# 키보드 인풋
name = input('what is your name?')
print('Hello', name)
x = input('?')
y = input('?')
intX = int(x) # 키보드 입력으로 받은 값은 string이다 int로 꼭 바꾸자!
intY = int(y)
print(intX*intY)

# 키보드 인풋 게임
input('엔터를 누르고 20초를 셉니다')
start = time.time() # 위에서 입력이 들어와야 실행된다!
input('20초 후 다시 엔터를 누릅니다')
end = time.time() # 마찬가지로 위 입력이 안들어오면 실행X!
et = end - start
print('실제 시간 : ', et, '초')
print('차이 : ', abs(et - 20), '초')

# if문
x = input("1+2 = ")
intX = int(x)
if intX == 3:
    print('구우욷')
else:
    print('ㅋㅋㅋ')

# random 모듈
t.shape('turtle')
t.speed(0)
for x in range(500):
    a = random.randint(1, 360)
    b = random.randint(1, 20)
    t.setheading(a)
    t.forward(b)

a = random.randint(1, 30)
b = random.randint(1, 30)
print(a, '+', b, '=')
x = input()
intX = int(x)
if a + b == intX:
    print('오오')
else:
    print('zzz')
'''


def play_random_number_game():
    n = random.randint(1, 30)
    try_num = 0
    while True:
        try_num += 1
        assume = input('어떤 숫자일까?? (0~30) [시도횟수: %d] ' % try_num)
        assumeInt = int(assume)
        if assumeInt == n:
            print('정답')
            break
        elif assumeInt > n:
            print('응아냐~ 더 작아~')
        else:
            print('응아냐~ 더 커~')


play_random_number_game()
