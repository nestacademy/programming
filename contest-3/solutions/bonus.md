# Оноо

Энэхүү бодлого нь дараах **2** дэд бодлогоос тогтоно.

1. Хэрэглэгчийн оноог тооцох.
2. Хэрэглэгчийн оноог хэрэглэгчийн дугаартай хамт эрэмбэлэх.

```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, i, n, ma = 0, maxIndex = -1;
    long long a[100], b[100], c[100];
    vector<pair<int, int> > d;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];

        // i дугаар хэрэглэгчийн оноог тооцох
        x = 0;
        if (c[i] <= b[i]) {
            x = c[i] - a[i] + 1;
        }

        d.push_back(make_pair(-x, i + 1));
    }

    sort(d.begin(), d.end());

    cout << d[0].second << endl;
    cout << d[1].second << endl;

    return 0;
}
```

## Author: LBayarkhuu