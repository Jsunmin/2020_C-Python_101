import turtle as t

week1 = 1
a = 20
b = 10
print(a + b)
print(a ** b)
print(a / b)
print(a // b)  # 나눈 몫
print(a % b)  # 나눈 나머지
print('튜토리얼', week1, '주차') # 띄어쓰기 적용해야 함
print('튜토리얼' + str(week1) + '주차') # 띄어쓰기 안됨
# 짧은 주석은 이렇게 쓰고..

'''
 긴 주석은 이렇게 쓰자!!
'''

# 쉽게 따라하는 파이썬
print('Hello')
print('Sunmin')

distance = 100
triangleDegree = 120
# 삼각형 그리기
t.color('red')
t.fd(distance)
t.left(triangleDegree)
t.fd(distance)
t.left(triangleDegree)
t.fd(distance)
t.left(triangleDegree)

# 사각형 그리기
t.color('green')
t.pensize(3)
t.fd(distance)
t.lt(90)
t.fd(distance)
t.lt(90)
t.fd(distance)
t.lt(90)
t.fd(distance)
t.lt(90)

# 원 그리기
t.color('blue')
t.pensize(5)
t.circle(distance)
