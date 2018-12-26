# Зөрүү
Танд **N** x **M** хүснэгт өгөгдөв. Таны даалгавар бол хүснэгтийн мөр бүрийн хувьд тухайн мөрөндөх хамгийн их болон хамгийн бага тоонуудын зөрүүг олох юм.

## Input
Эхний мөрөнд **N, M** тоонууд байрлана.
Дараагийн **N** мөр болгонд **M** тоонууд байрлана.

## Output
**N** мөр тус бүрд харгалзах хариуг хэвлэнэ үү.

## Constraints
- ** 1 &le; N, M &le; 1000**
- Өгөгдөх тоонууд **100000**-с бага байна.

##### Sample Input
```
3 4
1 1 1 1
9 2 5 4
6 6 3 6
```
##### Sample Output
```
0
7
3
```

##### Explanation
Эхний мөрний хамгийн их нь 1, хамгийн бага нь 1 учир хариу нь **1-1=0**
Хоёрдах мөрний хамгийн их нь 9, хамгийн бага нь 2 учир хариу нь  **9-2=7**
Гуравдах мөрний хамгийн их нь 6, хамгийн бага нь 3 учир хариу нь **6-3=3**

## Solution
```
#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a > b ? b : a;
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int MAX, MIN, tmp;
        cin >> tmp;
        MAX = MIN = tmp;
        for (int j = 1; j < M; j++) {
            cin >> tmp;
            MAX = max(MAX, tmp);
            MIN = min(MIN, tmp);
        }
        cout << MAX - MIN << endl;
    }
    return 0;
}
```