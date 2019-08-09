import copy
import math
from operator import itemgetter
fe = open("C:/Users/windows 10/Documents/kn1.txt", "r")
mlist=[]
train=[]
dt=[]
test=[]
dis=[]
cal=[]
dup=[]
m=[]
c=0
c1=0
c2=0
c3=0
sum=0
a=0
l=fe.readlines()
v=2

#mlist = [l.split() for l in open("C:/Users/windows 10/Documents/kn1.txt")]
#print (mlist)

for line in l:
    line=line.strip('\n')
    mlist.append(line.split(","))
    dup.append(line.split(","))
#print (dup[1])

for i in range(0,40):
    train.append(mlist[i])
#print(train)
for j in range(50,90):
    train.append(mlist[j])
for i in range(100,140):
    train.append(mlist[i])


for i in range(40,50):
    test.append(mlist[i])
for i in range(90,100):
    test.append(mlist[i])
for i in range(140,150):
    test.append(mlist[i])
#print(test[0][1])
#print(train)
#dt=train
dt=copy.deepcopy(train)

#print (dt)
    
for j in range(0,30):
    m=[]
    q=0
    for i in range(0,120):
        s=0.0
        for p in range(0,4):
            s+=math.sqrt(pow((float(test[j][p])-float(train[i][p])),2))
        dt[i].append(s)
    cal=sorted(dt, key=lambda l:l[5])
    for o in range(0,v):
        m.append(cal[o][4])
    #print(m)
    for u in range(0,v):
        if(m[u]=='0'):
            c1=c1+1
            q=0
        elif(m[u]=='1'):
            #print('naved')
            c2=c2+1
            q=1
        elif(m[u]=='2'):
            c3=c3+1
            q=2
            
    if(c1>c2)and(c1>c3):
            q=0
            a=int(test[j][4])
            #print('alam')
            if(q==a):
                #print('naved')
                c=c+1  
    elif (c2>c3):
        q=1
        if(q==int(test[j][4])):
            c=c+1
    else:
        q=2
        if(q==int(test[j][4])):
            c=c+1
    
    #print (k)
    #print(test[j][4])
    #m=[]
    dt=[]
    cal=[]
    dt=copy.deepcopy(train)

    #print (dt)
    c1=c2=c3=k=0
        #cal=sorted(dt, key=lambda l:l[5])
        #dt[5].sort()
        #dt.append(s)
    #dt[].append(dis[])
        #dt.append(dis)
b=len(test)
print (b)
print (c/b*100)        
            #k=float(s*s)
            #sum=sum+k
            #k=0
            #sq=0
        #cal.append(sum)
    
'''for i in range(0,3600):
    dup[i].append(dis[i])
print (dup[1])
for i in range(0,3):
    cal.append(dis[i],)
       
print (cal)'''
