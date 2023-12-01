
class Rectangle:
	def __init__(self,length,breadth):
		self.length = length
		self.breadth = breadth
	def area(self):
		print("Area = ",self.length*self.breadth)



s1 = Rectangle(2,3)
s1.area()