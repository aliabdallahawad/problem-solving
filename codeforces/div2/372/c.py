calculator = 2;
level = 1;
n = input();
n = int(n);
while n > 0 :
    levelCalc = level * (level + 1);
    powerLevelCalc = levelCalc * levelCalc;
    diff = (powerLevelCalc - calculator);
    a = diff / level;
    print(int(a));
    level = level + 1;
    calculator = levelCalc;
    n = n -1;