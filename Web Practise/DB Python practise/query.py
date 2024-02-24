import sqlite3

con=sqlite3.connect('data.db')
cr=con.cursor()
fname='fname'
lname='lname'
email='abc@123'
username='abcd'
password='av@12'
photo='text'

# cr.execute("create table if not exists user(fname TEXT,lname TEXT,email TEXT,username TEXT,password TEXT,photo TEXT)")


# data=[fname,lname,email,username,password,photo]
# cr.execute("insert into user values(?,?,?,?,?,?)",data)

# # data=[fname,lname]
# # cr.execute("insert into user(fname,lname) values(?,?)",data)


# con.commit() 
# cr.execute("select * from user where fname='"+fname+"' and lname='"+lname+"'")

# cr.execute("update user set fname='k', lname='kc' where email='abc@123'")
# con.commit()

# cr.execute("delete from user where fname='fname'")
# con.commit()

# cr.execute("drop table user")
# con.commit()

# cr.execute("select * from user")

cr.execute("create table if not exists user( id integer primary key,fname TEXT,lname TEXT,email TEXT,username TEXT,password TEXT,photo TEXT)")

data=[['fname','lname','email','username','password','photo'],
      ['k','b','c','d','r','g'],
      ['fname','lname','email','username','password','photo'],
      ['k','b','c','d','r','g']]

# for row in data:
#     # print(row)
#     cr.execute("insert into user(fname,lname,email,username,password,photo) values(?,?,?,?,?,?)",row)
#     con.commit()
cr.execute("select * from user")

# cr.execute("insert into user(fname,lname,email,username,password,photo) values(?,?,?,?,?,?)",data)
# con.commit()

# cr.execute("delete from user where id='1'")
# con.commit()

# con.commit()

# cr.execute("select * from user")

var = cr.fetchall()

print(var)


