
def main():
    A, P = [ int(x) for x in input().split() ]
    n = (A * 3 + P) / 2
    print(int(n))

if __name__ == '__main__':
    main()
