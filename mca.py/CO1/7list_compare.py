n = int(input("Enter number of elements for first list: "))
lst1 = [int(input("Enter element: ")) for x in range(n)]
n = int(input("Enter number of elements for first list: "))
lst2 = [int(input("Enter element: ")) for x in range(n) ]

if(len(lst1) == len(lst2)):
    print("* Both list are of same length")
if(sum(lst1)==sum(lst2)):
    print(f"* Both list are having sum of elements = {sum(lst1)}")

common = [element for element in lst1 if element in lst2]
# common =[]
# for x in lst1:
#     if x in lst2:
#         common.append(x)


if(common):
    print("* Both lists are having following elements as common :", end=" ")
    for x in common:
        print(x,end=" ")
else:
    print("* Both are list having distinct elements")