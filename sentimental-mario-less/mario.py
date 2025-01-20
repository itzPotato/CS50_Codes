def main():
    while True:
        try:
            h = int(input("Height: "))
            if 1 <= h <= 8:
                break
        except ValueError:
            continue

    for i in range(1, h + 1):
        print(" " * (h - i) + "#" * i)


if __name__ == "__main__":
    main()
