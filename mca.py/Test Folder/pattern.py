n = int(input("Enter a number : "))
for i in range(0,n):
    for j in range(0,i+1):
        print(f"{(i+1)*(j+1)} ",end="")
    print("")
