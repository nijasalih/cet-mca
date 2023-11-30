ls = ["apple","banana","pineapple","dragon fruit","strawberry"]

def l_word(ls):
    long_word = ls[0]
    for x in range(0,len(ls)-1):
        if (len(ls[x])<len(ls[x+1])):
            long_word = ls[x+1]
    return long_word

print(f"Longest word in the {ls} is {l_word(ls)}")

