'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''

def count(s):
    r=[]
    for str in s.split():
        j = "&".join(str)
        r=r+[j]
    return " ".join(r)

print(count("Python is fun to learn."))