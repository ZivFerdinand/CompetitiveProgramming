if __name__ == '__main__':
    a = []
    b = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        a.append([name,score])
        b.append(score)
    
    for i in range(b.count(min(b))):
        b.remove(min(b))
    
    c = min(b)
    d = []
    for i in a:
        if i[1]==c:
            d.append(i[0])
    d.sort()
    for j in d:
        print(j)