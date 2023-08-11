# import csv
# f=open('file.csv','w')
# writer=csv.writer(f)
# writer.writerow(['name','phone'])


# import csv
# f=open('file.csv','w', newline='')
# writer=csv.writer(f)
# data=[['fname','lname','email'],
#       ['k','j','r'],
#       ['k','j','r'],
#       ['k','j','r']]
# writer.writerows(data)
# f.close()

# f=open('file.csv','r')
# read1=csv.reader(f)
# print(read1)
# for row in read1:
#     print(row)





# import csv 
# import sqlite3

# con=sqlite3.connect('content.db')
# cr=con.cursor()

# cr.execute("create table if not exists user(fname TEXT,lname TEXT,email TEXT)")
# f=open('file.csv','w', newline='')
# writer=csv.writer(f)
# data=[['fname','lname','email'],
#       ['k','j','r'],
#       ['k','j','r'],
#       ['k','j','r']]
# writer.writerows(data)
# f.close()

# f=open('file.csv','r')
# read1=csv.reader(f)
# print(read1)
# # for row in read1:
# #     print(row)
# #     cr.execute("insert into user(fname,lname,email) values(?,?,?)",row)
# cr.execute("select * from user")
# con.commit()

# var = cr.fetchall()
# print(var)

# r=open('file1.csv','w',newline='')
# writer=csv.writer(r)
# writer.writerows(var)


import os
import csv

# print (os.path.exists("empy.txt"))
# if os.path.exists("empy.txt"):
#     print("exists")
#     os.remove('empy.txt')
# # else:
# #     # print("Not exists")
# #     f=open("empy.txt",'w')
# #     f.write('hello')
# #     f.close()

print (os.path.exists("empy.txt"))
if not os.path.exists("empy.txt"):
    f=open("empy.txt",'w')
    f.write('hello')
    f.close()

