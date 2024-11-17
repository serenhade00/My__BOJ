import sys
input = sys.stdin.read

data = input().splitlines()

n = int(data[0])

for i in range(1, n+1):
  string = data[i].split()
  for j in range(len(string)):
    string_list = list(string[j])
    string_list.reverse()
    string[j] = ''.join(string_list)
  print(' '.join(string))