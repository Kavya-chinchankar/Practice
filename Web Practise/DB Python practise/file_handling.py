# f = open("file.txt",'w')
# f.write('hello')
# f.close()

with open ('file.txt','w') as f:
    f.write('HELLO world!!\n kiran\n hello\n Ara Ara\n')
    f.close()

f = open('file.txt','r')
# data=f.readline()
data=f.read()
# data=f.readlines()
print(data)
f.close()