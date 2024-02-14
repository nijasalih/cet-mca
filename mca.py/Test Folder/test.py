#     * 
#    * *
#   * * *
#  * * * *
# * * * * *


#  range should be 0 to n+1
for i in range(0,6):
    for j in range(5-i,0,-1):
        print(" ",end="")
    for j in range(0,i):     
        print("* ",end="")
    print("")
for i in range(4,0,-1):
    for j in range(5-i,0,-1):
        print(" ",end="")
    for j in range(0,i):     
        print("* ",end="")
    print("")