# import sys
# sys.stdin = open("1.in", "r")


vowels = list("aeiouAEIOU")
word = list(input())
code = [int(number) for number in list(input())]

count = 0

def fits(substring):
    for code_index in range(len(code)):
        if code[code_index]:
            if substring[code_index] not in vowels:
                return 0
        else:
            if substring[code_index]  in vowels:
                return 0
    return 1

for index in range(len(word) - len(code) + 1):
    substring = word[index:index+len(code)]
    
    count += fits(substring)

print(count)