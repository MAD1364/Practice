def mostFrequent():
    list = [1, 2, 3, 1, 3, 1]
    newDic = {}.fromkeys(list, 0)    

    for number in list:
        newDic[number] += 1
    print(newDic)

    mostFreq = 0
    count = 0
 
    for key in newDic.keys():
        print(key)

    print("\n")
    for key in newDic.keys():
        if (newDic[key] > count):
            count = newDic[key]
            mostFreq = key

    print(mostFreq)

mostFrequent()