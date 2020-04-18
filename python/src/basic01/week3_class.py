# 내장함수
# print(123, 456, sep='/', end='\n\n')
# print('hello')
# help(print)

# def ope(a, b):
#     a /= 10
#     return a * b
# q = 10
# w = 5
# print( ope(q, w), q, w )

# def gugudan(dan):
#     for x in range(1, 10):
#         print(x * dan)
# gugudan(3)

# 텍스트 파일 입출력
# help(open)

# 파일 읽기 f.read() / f.readlines() / f.readline()
# file = open('./week4_homework.txt',  mode='rt', encoding='utf8')
# # full_content = file.read()
# # print(full_content)
# part_content = file.readlines()
# for x in part_content:
#     # print(x)
#     print(x[:-1])  # 파일 라인 읽기는 자체적으로 \n을 내포함. 그래서 각 줄마다 마지막 글자를 빼버려서, enter 처리를 없애버린 것!
# file.close()

# 파일 쓰기 f.write()
# file2 = open('./week4_homework.txt',  mode='w', encoding='utf8')  # 모드 w면 새파일로 아예 기입해 넣는다!
# file2.write('write test\n')
# file2.close()

# 파일 읽기 + 쓰기 (r+, w+)
# file3 = open('./week4_homework.txt',  mode='r+', encoding='utf8')  # 파일이 없으면 에러 ( 읽기 중심 )
# file4 = open('./week4_homework.txt',  mode='w+', encoding='utf8')  # 파일이 없어도 괜찮 ( 쓰기 중심 )

# 실습 메뉴 리스트 텍스트 파일 만들기
menu = ''
num = 1
f = open('./menu.txt', 'w', encoding='utf8')
while menu != 'q':
    menu = input('판매메뉴?')
    f.write(f'{num} {menu} \n')
    num += 1
f.close()

f1 = open('./menu.txt', 'r', encoding='utf8')
for x in f1.readlines():
    print(x, 'gg')
f1.close()
