def main():
    S = input()
    x_count = S.count('x')
    if x_count >= 8:
        print("NO")
    else:
        print("YES")

if __name__ == '__main__':
    main()
