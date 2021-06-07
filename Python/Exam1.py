plainText = input()
cipherText = input()
a='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
t=''
for i in plainText:
  c=a.index(i)
  cj= (c+5) % 26
  t=t+a[cj]
if(sorted(cipherText)==sorted(t)):
  print("Yes",end='')
else:
  print("No",end='')
