def isprime(n):
    if n==1:
        print("Not prime")
        return 
    sq = 1+(int)(math.sqrt(n))
    for i in range(2,sq):
        if n%i == 0:
            print("Not prime")
            return
    print("Prime")
    return
    
    
c = (int)(input())
for i in range(c):
    n = (int)(input())
    isprime(n)
