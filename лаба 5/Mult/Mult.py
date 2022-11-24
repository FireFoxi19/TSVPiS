import math

N1 = 0

def SumListNum(a, b):
    for i in range(0, len(a)-len(b), 1):
        b.insert(0,0)
    for i in range(0, len(b)-len(a), 1):
        a.insert(0,0)
    answ = []
    numSum = digit = 0
    for i in range(len(a)-1, -1, -1):
        numSum = a[i] + b[i] + digit
        digit = math.floor(numSum/10)
        answ.insert(0,numSum % 10)
    if digit != 0:
        answ.insert(0,digit)
    return answ

def ColumnMult(a, b):
    answ = []
    global N1
    N1 = countWrToAnsw = 0
    for i in range(len(b)):
        remB = b[len(b)-1-i]
        digit = 0
        miniAnsw = [0]*i
        if remB != 0:
            for j in range(len(a)):
                remA = a[len(a)-1-j]
                if remA != 0 or digit != 0:
                    N1+=1
                    multNum = remA * remB + digit
                    digit = math.floor(multNum / 10)
                    miniAnsw.insert(0,math.floor(multNum % 10))
                else: miniAnsw.insert(0,0)
            if digit != 0: miniAnsw.insert(0, digit)
            if countWrToAnsw != 0:
                answ = SumListNum(answ, miniAnsw)
                N1 += 1
            else: answ = miniAnsw
            countWrToAnsw += 1
    return answ

def StrToList(s):
    lst = []
    for i in s:
        lst.append(ord(i) - ord('0'))
    return lst

def GetNumbers():
    print("Enter First Num: ", end = "");
    a = input()
    print("\nEnter Second Num: ", end = "");
    b = input()
    print()
    a1 = StrToList(a)
    return a1,StrToList(b)

num1, num2 = GetNumbers()
print(ColumnMult(num1, num2))
print("N1: ",N1)
