# Enter your code here. Read input from STDIN. Print output to STDOUT
T=int(raw_input())
for i in xrange(T):
    n=int(raw_input())
    s=raw_input().split()
    nim=map(int,s)
    nimsum=nim[0]
    for j in xrange(1,n):
        nimsum=nim[j]^nimsum
    if all(x==1 for x in nim):
        if nimsum==0:
            print "First"
        else:
            print "Second"
    else:
        if nimsum==0:
            print "Second"
        else:
            print "First"
    
