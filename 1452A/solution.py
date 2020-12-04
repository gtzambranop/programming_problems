for i in range(int(input())):
    x, y = map(int, input().split())
    print (2 * max(x,y) - (x != y))