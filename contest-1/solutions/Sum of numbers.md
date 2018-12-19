# Sum of numbers
1-ээс _**N**_ хүртэлх тооны нийлбэр болох _**M**_ тоо өгөгдсөн бол _**N**_ тоог ол.

## Бодолт
```
#include <iostream>
using namespace std;

int main() {
    int M, N = 1;
    cin >> M;

    while (M != 0) {
        M -= N;
        N++;
    }
    cout << N - 1 << endl;

    return 0;
}
```
