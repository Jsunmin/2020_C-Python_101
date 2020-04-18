import sys
week1 = 1

print('튜토리얼', week1, '주차') # 띄어쓰기 적용해야 함
print('튜토리얼' + str(week1) + '주차') # 띄어쓰기 안됨
# 짧은 주석은 이렇게 쓰고..

'''
 긴 주석은 이렇게 쓰자!!
'''


print('"korea" = \'seoul\'')
print(''' "korea" =\|`[{.,/ 'seoul' ''') # ''' ''' ~ 사이에는 자유롭게 따옴표를 쓸 수 있는 듯 (이스케이프문 전부 가능)

a = 2
b = 10
print('사칙연산', a + b, a - b, a * b, a / b)

print(a ** b)
print(a // b)  # 나눈 몫
print(a % b)  # 나눈 나머지
x = 10
y = (x ** 2) + (2 * x) + 1
print('x^2 + 2x + 1 방정식 --> x:', x, 'y:', y)

print('숫자 1 사이즈:', sys.getsizeof(1))

# 시간 생성기
timeSec = 10000
hour = timeSec // (60 * 60)
leftTime1 = timeSec % (60 * 60)
minute = leftTime1 // 60
second = leftTime1 % 60
print(hour, '시간', minute, '분', second, '초')
print(hour, '시간', minute, '분', second, '초', sep='')

# 스트링 포맷
print('%d은(는) 정수입니다.' % 10)
print('%d + %d =%d' % (10, 20, 10 + 20))

