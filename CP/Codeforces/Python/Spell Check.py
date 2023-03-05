t = int(input())
while(t):
    n = int(input())
    s = input()
    if n != 5:
        print('NO')
    elif s.count('T') == 1 and s.count('i') == 1 and s.count('m') == 1 and s.count('u') == 1 and s.count('r') == 1:
        print('YES')
    else:
        print('NO')
    t -= 1