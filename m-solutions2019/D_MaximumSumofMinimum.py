import itertools

def main():
    N = int(input())
    sides = []
    for x in range(N - 1):
        sides.append([ int(x) for x in input().split() ])
    cn = [ int(x) for x in input().split() ]

    max_sum = 0
    max_cn = []
    for temp_cn in itertools.permutations(cn):
        sum = 0
        for aibi in sides:
            sum += min(temp_cn[aibi[0] - 1], temp_cn[aibi[1] - 1])
        if sum > max_sum:
            max_sum = sum
            max_cn = temp_cn

    print(max_sum)
    print(" ".join(map(str, max_cn)))

if __name__ == '__main__':
    main()
