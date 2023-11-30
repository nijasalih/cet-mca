ls1 = ['red','blue','green','yellow']
ls2 = ['green','cyan','red']
ls3 = [x for x in ls1  if x not in ls2]

print("Elements only in list 1 : ")
for x in ls3:
    print(f"{x}")