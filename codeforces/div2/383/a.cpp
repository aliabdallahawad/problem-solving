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
  long long n;
  cin >> n;
  if (n > 0) {
    switch(n%4) {
      case 1:
        cout << 8;
        break;
      case 2:
        cout << 4;
        break;
      case 3:
        cout << 2;
        break;
      default:
        cout << 6;
        break;
    }
  }
  else
    cout << 1;
  return 0;
}