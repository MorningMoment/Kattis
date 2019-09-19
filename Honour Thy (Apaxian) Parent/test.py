import sys
#
f = open("in.txt")
cnt = f.read().split()
f.close()
'''
The basic principle was to take an Apaxian name 𝑌, add ex, and then the name 𝑃 of one of the parents. 
For example, if 𝑌 is menolaxios and 𝑃 is mox, the extended name is 𝚖𝚎𝚗𝚘𝚕𝚊𝚡𝚒𝚘𝚜+𝚎𝚡+𝚖𝚘𝚡=𝚖𝚎𝚗𝚘𝚕𝚊𝚡𝚒𝚘𝚜𝚎𝚡𝚖𝚘𝚡
However, there were a few exceptions to this rule:

- If 𝑌 ends with e, then the extended name is 𝑌+𝚡+𝑃
- If 𝑌 ends with any other vowel (a,i,o, or u), we remove that final vowel from 𝑌, and then extend 𝑌 with 𝚎𝚡+𝑃
- If 𝑌 already ends with ex, then the extended name is simply 𝑌+𝑃.
'''
#cnt = sys.stdin.read().split()

Y = cnt.pop(0)
p = cnt.pop(0)

end2=Y[-2:]

if end2 =="ex":
    print(Y+p)
else:
    end1 = Y[-1]
    if end1=="e":
        print(Y+'x'+p)
    elif end1 in "aiou":
        print(Y[:-1]+"ex"+p)
    else:
        print(Y+"ex"+p)

