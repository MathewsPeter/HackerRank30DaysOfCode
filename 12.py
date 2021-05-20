class Student(Person):
    def __init__(self,fn,ln,id,s):
        self.firstName = fn
        self.lastName = ln
        self.idNumber = id
        self.s = s
        
    def calculate(self):
        sum = 0
        i = 0
        for score in self.s:
            sum+=score
            i+=1
        avg = sum//i
        if(avg>=90):
            return 'O'
        if(avg>=80):
            return 'E'
        if(avg>=70):
            return 'A'
        if(avg>=55):
            return 'P'
        if(avg>=40):
            return 'D'
        return 'T'
