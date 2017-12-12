from random import randint
import sys
def fill(z,n,i,j,s,w,visited):
	if n[i][j] != s:
		return
	n[i][j]=w
	for x in range(-1,2):
		for y in range(-1,2):
			if i+x > -1 and i+x < z and j+y > -1 and j+y < z: # Iterate through all neighbors
				if not visited[i+x][j+y]: #Check if we've been here before
					visited[i+x][j+y]=True #If we haven't visited mark it as visited
					fill(z,n,i+x,j+y,s,w,visited) #fill 

def func():
	q=int(input())
	for a0 in range(q):
		n,i,j,w = [int(x) for x in input().split()]
		a = [[] for x in range(n)] #The matrix that holds the values of the pixels
		qq = [[] for x in range(n)] #The matrix that marks the visited elements.
		for x in range(n):
			a[x] = [int(z) for z in input().split()] #inputs values of the pixels
			qq[x] = [False for z in range(n)] #Initializes all elements to not visited
		fill(n,a,i,j,a[i][j],w,qq)
		for i in range(n):
			for j in range(n):
				print(a[i][j],end=' ')
			print()

if __name__=='__main__':
	func()