class Publisher:
    def __init__(self,pname):
        self.pname = pname        

class Book(Publisher):
    def __init__(self,pname,title,author):
        super().__init__(pname)
        self.title = title
        self.author = author

    def print(self):
        print(f"\nTitle of the Book : {self.title}\nAuthor : {self.author}\nPublisher : {self.pname}")               

class Python(Book):
    def __init__(self,pname,title,author,price,no_of_pages):
        super().__init__(pname,title,author)
        self.price = price
        self.no_of_pages = no_of_pages
    
    def print(self):
        print(f"{super().print()} No. of Pages : {self.no_of_pages}\nPrice : Rs.{self.price}")

title = input("Enter the title of the book : ")
pub_name = input("Enter the name of publisher  : ")
author = input("Enter the author name : ")
no_of_pages = int(input("Enter the no of pages : "))
price = int(input("Enter the number of price : "))

p1 = Python(pub_name,title,author,price,no_of_pages)

p1.print()