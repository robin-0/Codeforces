# بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
# رَّبِّ زِدْنِى عِلْمًا

# python 2

n=int(raw_input(''))

s = raw_input()
listt = map(int, s.split())

summ=0

for i in range(n):
  a=listt[i]
  listt.append(a)
  summ+=a

ans=0

if(summ%3==0):
  one_third=summ/3
  two_third=one_third*2

  one_array=[]
  two_array=[]

  summ=0

  for i in range (0,n):
    summ+=listt[i]
    if summ==one_third:
      one_array.append(i)
    if summ==two_third:
      two_array.append(i)

  j=0
  len2=len(two_array)

  if(len2!=0):
    if two_array[len2-1]==n-1:
      len2-=1

  #print one_array
  #print two_array

  for i in one_array:
    change = True
    while change:
      if(j==len2):
          break
      if(two_array[j]>i):
        ans+=len2-j
        change= False
      else:
        j+=1
    if(j==len2):
          break
        

print ans
    
    
  
  
  
