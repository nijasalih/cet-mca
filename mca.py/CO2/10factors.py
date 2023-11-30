def factor(n):
    print(f"Factors of {n} are : ")
    for x in range(1,n//2):
        if n%x==0:
            print(f"{x}",end=" ")
            
n = int(input("Enter a number : "))
factor(n)