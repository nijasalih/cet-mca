def patt(n):
    print(f"Pattern of {n} rows : ")
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j*i,end=" ")
        print("\n")
        

x = int(input("Enter the limit : "))
patt(x)