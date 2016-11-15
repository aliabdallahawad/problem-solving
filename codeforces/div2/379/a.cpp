// @author aliabdallah
// #includes {{{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <functional>
#include <math.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <limits.h>
#include <ctype.h>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>
#include <sstream>
#include <utility>
#include <numeric>
#include <list>
#include <iomanip>
#include <cmath>
#include <stack>
#include <complex>
#include <valarray>
using namespace std;
// }}}

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a = 0, d = 0;
  for(int i = 0; i < n; i++)
    if (s[i] == 'A') a++; else d++;
  if (a > d)
    cout << "Anton";
  else if (d > a)
    cout << "Danik";
  else
    cout << "Friendship";
  return 0;
}