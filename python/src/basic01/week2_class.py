import turtle as t
import time
# 리스트: 인덱스를 이용해 데이터 접근
a = [ 1, 2, 3 ]
print(a)

# 튜플: 인덱스를 이용해 데이터 접근 / 값 수정 불가능
b = (10, 20, 30)
# 패킹 언패킹
c = 10, 20, 30  # 소괄호 생략 가능 ( 패킹 )
print(b)
print(c)
c1, c2, c3 = c
print( c1, c2, c3) # ( 언패킹 )

# 스위치
b,a = a,b
print(a, b) # a와 b를 바꿔서 대입한다

# 딕셔너리: 키를 통해 데이터 접근
w = { 'a': 1, 'b': 2, 'c': 3 } # 파이썬은 key도 스트링으로 감싸줘야 한다!

# range 함수 # 인자 ( 시작, 끝, 건너뛰는 조건 )
def range_study():
    print( list( range(0, 10, 1) ) )
    # for i in range(50, 100):
    #     if i % 2 == 1:
    #         print(i)
    for i in range(51, 100, 2): # 이 방법이 훨씬 효율적이다!!
        print(i)
    num = int( input('몇 단 보고 싶니?') )
    for x in range(1, 10):
        print( "%d x %d = %d" % ( num, x, num * x ) )
# range_study()
# 실습
def practice():
    # 실습3
    # num1 = input('3의 배수 어디까지?')
    # print( list( range(0, int(num1) + 1, 3) ) )
    # 실습4
     while True:
         num2 = input('숫자1?')
         num3 = input('숫자2?')
         oper1 = input('연산자?')
         if num2 == 'q' or num3 == 'q' or oper1 == 'q':
             print('계산기 종료')
             break
         print( eval( "%s %s %s" % (num2, oper1, num3) ) )
    # 실습5
    # dicA = {1: 94, 2: 87, 3: 91, 4: 75, 5: 92}
    # list = ''
    # for key, value in dicA.items():
    #     if value >= 90:
    #         list += ( str(key) + ' ' )
    # print(list)
    # 실습5-1
    # names = ['홍길동', '이순신', '김순희', '이철수']
    # ans = ''
    # for name in names:
    #     score = input('%s의 판매 수량?? ' % name)
    #     starScore = '*' * int(score)
    #     ans += f'{name} : {starScore}\n'
    # print(ans)
    # 실습6
    # dicB = {'이름': '', '신장': 0, '몸무게': 0}
    # for key, value in dicB.items():
    #     result = input('당신의 %s?? ' % key)
    #     dicB[key] = result
    # ave_wight = ( int(dicB['신장']) - 100 ) * 0.9
    # status = '적정 체중입니다.'
    # print(ave_wight, int(dicB['몸무게']) - ave_wight)
    # if int(dicB['몸무게']) - ave_wight > 5:
    #     status = '비만입니다.'
    # elif int(dicB['몸무게']) - ave_wight < -5:
    #     status = '너무 말랐네요.'
    # print(f'{dicB["이름"]}님은 {status}')
practice()
