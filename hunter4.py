def findUnique(a):
	xor = 0
	for i in a:
		xor ^= i
	print xor

findUnique([1,2,6,9,9,1,3,6,2])
findUnique([12,45,32,65,32,65,45])
