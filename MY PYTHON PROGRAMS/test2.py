def f():
    yield 5
    yield 6
    yield 7

for i in f():
    print(i)