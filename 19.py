class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        sum = n
        for i in range(1,1+int(n/2)):
            if n%i == 0:
                sum += i
        return sum
