def power(arr,i,n):
    if(i<n):
        power(arr,i+1,n)
        arr[i] = not arr[i]
        power(arr,i+1,n)
    else:
        a=[]
        for x in arr:
            a.append(arr[x])
        
        file.write(str(a)+'\n') 
    
n = int(input("Introduce la potencia"))
arr = [True]*n

file = open('log.txt','w') 
power(arr,0,n)
file.close() 