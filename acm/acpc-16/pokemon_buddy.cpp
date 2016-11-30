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
  int t, g, c, e;
  cin >> t;
  while(t--) {
    cin >> g >> c >> e;
    if (e <= c) {
      cout << 0 << endl;
      continue;
    }
    if (g == 1)
      cout << e-c;
    else if (g == 2)
      cout << (e-c)*3;
    else
      cout << (e-c)*5;
    cout << endl;
  }
  return 0;
}