from sys import stdin
import math
def input():
	return stdin.readline()[:-1]

def main():
	str = input()
	if str == "AAA" or str == "BBB":
		print("No")
	else:
		print("Yes")


if __name__ == '__main__':
	main()
