text = input()
dict = {}
#your code goes here
for i in text: 
	if i in dict: 
		dict[i] += 1
	else: 
		dict[i] = 1

print (str(dict)) 
