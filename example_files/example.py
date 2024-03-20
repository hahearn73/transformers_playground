def dot_product(v1, v2):
    assert(len(v1) == len(v2))
    total = 0
    for i in range(len(v1)):
        total += v1[i] * v2[i]
    return total

def main():
    print(dot_product([1, 2, 2], [3, 56, 1]))

if __name__ == "__main__":
    main()