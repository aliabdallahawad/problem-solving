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
  long long n, a, b, c, x;
  cin >> n >> a >> b >> c;
  x = n % 4;
  if (x == 1) {
    long long mini = min(c, min(a+b, a*3));
    cout << mini;
  } else if (x == 2) {
    long long mini = min(b, min(a*2, c*2));
    cout << mini;
  } else if (x == 3) {
    long long mini = min(a, min(3*c, b+c));
    cout << mini;
  } else {
    cout << 0;
  }
  return 0;
}