
#Create and Initialize List and variables
ListA= [3,22,17,8,30,2,14,1]
num=len(ListA)

#For Loop iterates through the list
for i in ListA:

	#Starting at end of list, decrement
	#through list and swap if out of order
	for j in range(num-1,i-1,-1):
		if ListA[j]<ListA[j-1]:
			tempstorage=ListA[j];
			ListA[j]=ListA[j-1];
			ListA[j-1]=tempstorage;
		
#Print items using "for x in list" loop 
print("Sorted ListA")
print("ListA: ", end="")
for x in ListA:
	print(x," ", end="")
print("")


