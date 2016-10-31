s = input()
max = 0
calc = 0
for c in s:
  calc = calc + 1
  if c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'Y':
    max = calc if calc > max else max
    calc = 0
calc = calc + 1
max = calc if calc > max else max
print(max)