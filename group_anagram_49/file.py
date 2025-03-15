from collections import defaultdict

inp_str=["eat", "tea", "tan", "ate", "nat", "bat"]
result={}
for i in inp_str:
    arr=[0]*26
    for j in i:
        arr[ord(j)-ord('a')]+=1
    result[tuple(arr)]=result.get(tuple(arr),[])+[i]
print(result.values())
    