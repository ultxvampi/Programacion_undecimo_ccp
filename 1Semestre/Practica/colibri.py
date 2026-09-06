#!/usr/bin/python3
import sys

def main():
    """
    Lectura de los datos
    """
    n = int(input())

    a, b, c = map(int, input().split())

    dp_a = a
    dp_b = b
    dp_c = c

    for _ in range(n - 1):
      a, b, c = map(int, input().split())

      nuevo_a = a + max(dp_b, dp_c)
      nuevo_b = b + max(dp_a, dp_c)
      nuevo_c = c + max(dp_a, dp_b)

      dp_a = nuevo_a
      dp_b = nuevo_b
      dp_c = nuevo_c

    print(max(dp_a, dp_b, dp_c), end="")

if __name__ == '__main__':
    main()