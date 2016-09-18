#include <bits/stdc++.h>
using namespace std;

// level (1) => [ 1*2 = 2  ] => [ power(2)  = 4    ] => [ (2*1)   + 2  ]
// level (2) => [ 2*3 = 6  ] => [ power(6)  = 36   ] => [ (17*2)  + 2  ]
// level (3) => [ 3*4 = 12 ] => [ power(12) = 144  ] => [ (46*3)  + 6  ]
// level (4) => [ 4*5 = 20 ] => [ power(20) = 400  ] => [ (97*4)  + 12 ]
// level (5) => [ 5*6 = 30 ] => [ power(30) = 900  ] => [ (176*5) + 20 ]
// level (6) => [ 6*7 = 42 ] => [ power(42) = 1764 ] => [ (289*6) + 30 ]

int main()
{
  unsigned long long n, calculator = 2, level = 1;
  cin >> n;
  while(n--) {
    unsigned long long levelCalc = level * (level + 1);
    unsigned long long powerLevelCalc = levelCalc * levelCalc;
    unsigned long long diff = (powerLevelCalc - calculator);
    unsigned long long a = diff / level;
    cout << a << "\n";
    level++;
    calculator = levelCalc;
  }
  return 0;
}