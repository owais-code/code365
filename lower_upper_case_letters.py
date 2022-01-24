s = str(input())
cnt1=0
cnt2=0
 
for i in s:
    if(i.isupper()) == True:
        cnt1+=1
    elif(i.islower()) == True:
        cnt2+=1
        
if(cnt1>cnt2):
    print(s.upper())
else:
    print(s.lower())
