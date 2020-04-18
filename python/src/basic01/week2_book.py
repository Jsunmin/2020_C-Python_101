import turtle as t
import random
import time

# 1부터 n까지 합 / 곱 구하는 함수
def sum_func(n, operator):
    sum = 1
    if operator == 'multiple':
        for x in range(2, n + 1):
            sum += x
    elif operator == 'plus':
        for x in range(2, n + 1):
            sum *= x
    return sum


# print(sum_func(10, 'plus'))
# print(sum_func(10, 'multiple'))

# 다각형 그리기
def polygon(n, length):
    for x in range(0, n):
        t.fd(length)
        print(t.pos())
        t.lt(360 / n)


# polygon(10, 50)

# 시공의 폭풍 그리기
def make_outer_beauty():
    t.bgcolor('black')
    t.speed(7)
    for x in range(200):
        if x % 5 == 0:
            t.color('red')
        elif x % 5 == 1:
            t.color('yellow')
        elif x % 5 == 2:
            t.color('blue')
        elif x % 5 == 3:
            t.color('green')
        elif x % 5 == 4:
            t.color('white')
        t.forward(x * 2)
        t.left(70)


# make_outer_beauty()

# 자유로운 터틀 립
# 깔끔하게 수납하고 싶어??! obj에 함수넣기? 그게 바로 class지!! ~ 그치만 미래의 너를 위해 남겨놓을게 ^^
def t_free_mode(mode):
    t.shape('turtle')
    t.pensize(2)
    t.speed(6)
    if mode == 'keyboard':
        distance = 30

        def t_r():
            t.setheading(0)
            t.forward(distance)

        def t_l():
            t.setheading(180)
            t.forward(distance)

        def t_u():
            t.setheading(90)
            t.forward(distance)

        def t_d():
            t.setheading(270)
            t.forward(distance)

        def t_blank():
            t.clear()

        t.onkeypress(t_r, 'Right')
        t.onkeypress(t_l, 'Left')
        t.onkeypress(t_u, 'Up')
        t.onkeypress(t_d, 'Down')
        t.onkeypress(t_blank, 'Escape')
    elif mode == 'mouse':
        t.hideturtle()
        t.onscreenclick(t.goto)
    t.listen()
    t.mainloop()


# t_free_mode('keyboard')

# calculator game
def calculator_game():
    oper = input('원하는 연산자는? (+, -, *, /)')
    ans_count = 0
    err_count = 0
    while ans_count + err_count < 5:
        num1 = random.randint(1, 100)
        num2 = random.randint(1, 100)
        trial = input(f'{num1} {oper} {num2} = ?')
        if int(trial) == eval(f'{num1} {oper} {num2}'):
            ans_count += 1
            print('구우욷')
        else:
            err_count += 1
            print(f'한번 또 한번.. [{err_count}]')
    print(f'결과: 정답횟수= {ans_count} / 틀린횟수= {err_count}')


# calculator_game()

# typing game
def typing_game():
    words = ['cat', 'dog', 'fox', 'monkey', 'mouse', 'panda', 'frog', 'snake', 'wolf']
    pass_count = 0
    word = random.choice(words)
    start_time = time.time()
    while pass_count < 5:
        if word == input(f'{word}  '):
            pass_count += 1
            word = random.choice(words)
        else:
            print('wrong... try again!')
    end_time =  time.time()
    sec = round( end_time - start_time, 2 )
    print(f'finish!! time: { sec }sec')
# typing_game()

# turtle cannon
def turtle_cannon( power ):
    def turn_up():
        t.left(4)
    def turn_down():
        t.right(4)
    def fire():
        ang = t.heading()
        while t.ycor() > 0:
            t.forward(power)
            t.right(5)
        d = t.distance(target, 0)
        t.sety(random.randint(10, 100))
        if d < 25:
            t.color('blue')
            t.write('Good!', False, 'center', ('', 15))
        else:
            t.color('red')
            t.write('Bad!', False, 'center', ('', 15))
        t.color('black')
        t.goto(-300, 10)
        t.setheading(ang)
    t.goto(-400, 0)
    t.down()
    t.goto(400, 0)
    target = random.randint(100, 350)
    t.pensize(3)
    t.color('green')
    t.up()
    t.goto(target - 25, 2)
    t.down()
    t.goto(target + 25, 2)

    t.color('black')
    t.up()
    t.goto(-300, 10)
    t.setheading(25)

    t.onkeypress(turn_up, 'Up')

    t.onkeypress(turn_down, 'Down')
    t.onkeypress(fire, 'space')
    t.listen()
    t.mainloop()
# turtle_cannon( 25 )

# turtle run
def turtle_run1():
    # 세팅
    te = t.Turtle()
    ts = t.Turtle()
    def setup():
        te.shape('turtle')
        te.color('red')
        te.speed(0)
        te.up()
        te.goto(0, 200)
        ts.shape('circle')
        ts.color('green')
        ts.speed(0)
        ts.up()
        ts.goto(0, -200)
        t.goto(0, 0)
    setup()
    def t_r():
        t.setheading(0)
    def t_l():
        t.setheading(180)
    def t_u():
        t.setheading(90)
    def t_d():
        t.setheading(270)
    def play():
        t.forward(10)
        ang = te.towards( t.pos() )
        te.setheading(ang)
        te.forward(10)
        if t.distance(ts) < 12:
            star_x = random.randint(-230, 230)
            star_y = random.randint(-230, 230)
            star_x1 = random.randint(-230, 230)
            star_y2 = random.randint(-230, 230)
            ts.goto(star_x, star_y)
            te.goto(star_x1, star_y2)

        if t.distance(te) >= 12:
            t.ontimer(play, 100)

    t.setup(500, 500)
    t.bgcolor('orange')
    t.shape('turtle')
    t.speed(0)
    t.up()
    t.color('white')
    t.onkeypress(t_r, 'Right')
    t.onkeypress(t_l, 'Left')
    t.onkeypress(t_u, 'Up')
    t.onkeypress(t_d, 'Down')
    t.onkeypress(setup, 'Escape')
    t.listen()
    play()
    t.mainloop()
# turtle_run1()
playing = False
score = 0
def turtle_run2():
    # 세팅
    te = t.Turtle()
    te.shape('turtle')
    te.color('red')
    te.speed(0)
    te.up()
    te.goto(0, 200)
    ts = t.Turtle()
    ts.shape('circle')
    ts.color('green')
    ts.speed(0)
    ts.up()
    ts.goto(0, -200)

    def start():
        global playing
        if playing == False:
            playing = True
            t.clear()
            play()
    def play():
        global score, playing
        t.forward(10)
        ang = te.towards(t.pos())
        te.setheading(ang)
        te.forward(10)
        if random.randint(1,5) ==3:
            ang - te.towards(t.pos())
            te.setheading(ang)
        speed = score + 4
        if speed > 15:
            speed = 15
        te.forward(speed)
        if t.distance(te) < 12:
            text = f'Score : {score}'
            message('Game Over', text)
            playing = False
            score = 0

        if t.distance(ts) < 12:
            star_x = random.randint(-230, 230)
            star_y = random.randint(-230, 230)
            star_x1 = random.randint(-230, 230)
            star_y2 = random.randint(-230, 230)
            ts.goto(star_x, star_y)
            te.goto(star_x1, star_y2)
            score += 1
            t.write(score)
        if t.distance(te) >= 12:
            t.ontimer(play, 100)
    def message( m1, m2 ):
        t.clear()
        t.goto(0, 100)
        t.write(m1, False, 'center', ('', 20))
        t.goto(0, -100)
        t.write(m2, False, 'center', ('', 20))
        t.home()
    def t_r():
        t.setheading(0)
    def t_l():
        t.setheading(180)
    def t_u():
        t.setheading(90)
    def t_d():
        t.setheading(270)
    t.title('Turtle Run')
    t.setup(500, 500)
    t.bgcolor('orange')
    t.shape('turtle')
    t.speed(0)
    t.up()
    t.color('white')
    t.onkeypress(t_r, 'Right')
    t.onkeypress(t_l, 'Left')
    t.onkeypress(t_u, 'Up')
    t.onkeypress(t_d, 'Down')
    t.onkeypress(start, 'space')
    message('Turtle Run', '[Space]')
    t.listen()
    t.mainloop()

turtle_run2()