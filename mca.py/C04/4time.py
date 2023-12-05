class Time:
    def __init__(self,h=0,m=0,s=0):
        self.__hours = h
        self.__minutes = m
        self.__seconds = s
    def __add__(self,other):
        t = Time()
        s = self.__seconds + other.__seconds
        m = self.__minutes + other.__minutes
        h = self.__hours + other.__hours

        t.__seconds = s % 60
        carry = s // 60
        t.__minutes = (m + carry) % 60
        carry = (m + carry) // 60
        t.__hours = (h + carry) % 24 

        return t
    def print_time(self):
        print(f"{self.__hours:02}:{self.__minutes:02}:{self.__seconds:02}")

t1 = Time(0,1000,0)
t2 = Time()

t3 = t1 + t2 

t3.print_time()
        