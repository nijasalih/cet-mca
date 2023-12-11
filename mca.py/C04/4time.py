class Time:
    def __init__(self,h=0,m=0,s=0):
        self.__hours = h
        self.__minutes = m
        self.__seconds = s
    def __add__(self,other):
        t = Time()
        
        h = self.__hours + other.__hours
        m = self.__minutes + other.__minutes
        s = self.__seconds + other.__seconds

        t.__seconds = s % 60
        carry = s // 60
        t.__minutes = (m + carry) % 60
        carry = (m + carry) // 60
        t.__hours = (h + carry) % 24 

        return t
   
    def __str__(self):
        return f"{self.__hours:02}:{self.__minutes:02}:{self.__seconds:02}"

t1 = Time(0,30,0)
t2 = Time(0,40,0)

t3 = t1 + t2 

print(t3)
        