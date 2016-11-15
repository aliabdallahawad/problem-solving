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
  long long n2, n3, n5, n6;
  cin >> n2 >> n3 >> n5 >> n6;
  long long min256 = min(min(n5, n6), n2);
  long long min32 = min(n3, n2-min256);
  cout << 256 * min256 + 32 * min32;
  return 0;
}