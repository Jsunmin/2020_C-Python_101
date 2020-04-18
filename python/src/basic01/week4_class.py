# 클래스: 객체를 만들기 위한 틀
# 강아지 클래스
class Dog:
    # 클래스 필드
    type = '강아지'
    leg = 4

    # 메소드
    def setName(self, name):
        # 개별 인스턴스 필드 설정 ( 인스턴스 = self )
        self.name = name

    def setAge(self, age):
        # 개별 인스턴스 필드 설정 ( 인스턴스 = self )
        self.age = age

    def run(self):
        print('뛴다')

    def eat(self):
        print(self)
        print('먹다')


# d1 = Dog()
# d1.eat()
# d1.setName('큰북이')
# d1.setAge(11)
#
# d2 = Dog()
# d2.eat()
# d2.setName('꼬북이')
# d2.setAge(9)
# print(d1.name, d1.age, d1.type)
# print(d2.name, d2.age, d2.type)


# 계산기 클래스
# 속성: 색, 메이커
# 기능: 덧셈 (매개변수 필요)
class Cal:
    color = 'red'
    maker = 'casio'

    def add(self, a, b):  # self는 없애면 안된다!
        print(self)
        return a + b

    def sub(self, a, b):
        return a - b


# c1 = Cal()
# print(c1.add(3, 2), c1.sub(3, 2), c1.maker)  # c1.add('a', 3, 2) ~ 인자 3갠데 4개 줬다는 에러!


# 자동차 클래스
class Car1:
    type = 'SUV'

    def __init__(self, color):  # 초기화 메서드
        self.setColor(color)
        self.power = False

    def setColor(self, color):
        self.color = color

    def setPowerToggle(self):
        self.power = not self.power


# c1 = Car1('red')
# print(c1.color, c1.power)
# c2 = Car1('blue')
# print(c2.color, c2.power)
# c1.setColor('yellow')
# c1.setPowerToggle()
# print(c1.color, c1.power)
# c2.setPowerToggle()
# c2.setPowerToggle()
# print(c2.color, c2.power)


class Car2:
    maker = '현기차'

    def __init__(self, name):  # 생성자 함수
        self.speed = 0
        self.name = name

    def speedUp(self):
        self.speed += 1
        print(self.name, ':', self.speed)

    def speedDown(self):
        self.speed -= 1
        print(self.name, ':', self.speed)


# c3 = Car2(input('차명은??'))
# print(c3.name, c3.speed)
# while True:
#     no = input('1:Up / 2:Down / 0: 종료 ')
#     if no == '1':
#         c3.speedUp()
#     elif no == '2':
#         c3.speedDown()
#     else:
#         break

class People:
    state = 'mankind'
    manCount = 0

    @classmethod
    def peopleCountUp(cls):
        cls.manCount += 1
        print(cls.manCount, cls.state)

    @classmethod
    def peopleCountDown(cls):
        cls.manCount -= 1
        print(cls.manCount, cls.state)

    @classmethod
    def peopleCount(cls):
        print(cls.manCount, cls.state, '@@')


class Student(People):
    school = '똥대'
    # 학생 수
    count = 0

    @classmethod
    def StudentCountUp(cls):
        cls.count += 1
        super().peopleCount()
    @classmethod
    def StudentCountDown(cls):
        cls.count -= 1
        super().peopleCountDown()

    def __init__(self, clsRoom, name):
        self.clsRoom = clsRoom
        self.name = name
        Student.StudentCountUp()
        super().peopleCountUp()

    def __del__(self):
        Student.StudentCountDown()
        print('@@')
        # super().state = 'mankinds'
        # super().peopleCountDown()
        # super().peopleCount()

print( Student.mro() )
s1 = Student('파이썬반', '민정')
s2 = Student('C반', '선민')
print(s1.school, s1.clsRoom, s1.name, Student.count, Student.manCount)
print(s2.school, s2.clsRoom, s2.name, Student.count, Student.manCount)
# del s2
print('지움', s1.school, s1.clsRoom, s1.name, Student.count, Student.manCount)
