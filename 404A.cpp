# بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
# رَّبِّ زِدْنِى عِلْمًا

# python 2

n=int(raw_input(''))

page_line=[]

for i in range(0,n):
    j=str(raw_input(''))
    page_line.append(j)


diag=page_line[0][0]
onno=page_line[0][1]

test=True

if diag==onno:
    test=False 

for i in range(0,n):
    if page_line[i][i]!=diag:
        test=False
        break;
    if page_line[i][n-1-i]!=diag:
        test=False
        break;

if test==True:
    for i in range(0,n):
        for j in range(0,n):
            if (i==j)or ((i+j)==n-1) :
                continue
            else:
                if page_line[i][j]!=onno:
                    test=False
                    break;
        if test==False:
            break

if test==False:
    print 'NO'
else:
    print 'YES'
        



               

               

        
