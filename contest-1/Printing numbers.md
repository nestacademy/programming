# Printing numbers
Хэрэв _**N**_ тоо өгөгдсөн бол дараах байдалтай хэвлэж үзүүлнэ үү.

_**1**_</br>
_**22**_</br>
_**333**_</br>
_**...**_</br>
_**NNN...N**_</br>

# Бодолт
Зүй тогтолыг ажиглавал _**i**_ дэх мөрөнд _**i**_ тоог _**i**_ удаа хэвлэсэн байна.
```
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int dummy = 1; dummy <= i; dummy++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
```
