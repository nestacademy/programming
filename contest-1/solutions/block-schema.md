# Блок схем
Өгөгдсөн блок схемын дагуу кодыг бичнэ үү.
<img src="https://i.imgur.com/v3QoenD.png" alt="block-schema" width="640"/>

## Бодолт
<img src="https://i.imgur.com/1sDZ5l9.png" alt="block-schema" width="640"/>

```
#include <iostream>
using namespace std;

int main() {
    int A, B, C, temp;
    cin >> A >> B >> C;

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    cout << A << " " << B << " " << C << endl;

    return 0;
}
```
