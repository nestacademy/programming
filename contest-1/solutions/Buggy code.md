# Buggy code
Драра та нартай л адил шинээр код бичиж сурж байгаа. Өнөөдөр тэрээр өгөгдсөн тоо тэгш бол “Nest ”, -д үлдэгдэлгүй хуваагддаг бол “Academy ”, -д үлдэгдэлгүй хуваагддаг бол “Bright ”, -д хуваагддаггүй бол “Future ” гэж хэвлэх код бичжээ. Гэвч түүний бичсэн код хүссэн гаралтыг нь гаргахгүй байгаа тул тэрээр танаас зөв код болгож өгөхийг гуйж байна. Түүнд туслана уу.
Түүний бичсэн код:
```
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n % 2 == 0) cout << "Nest ";
    else if(n % 3 == 0) cout << "Academy ";
    if(n % 5 == 0 && n % 2 == 0) cout << "Bright ";
    if(n % 7 == 0) cout << "Future ";
    return 0;
}
```

## Бодолт
```
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n % 2 == 0) cout << "Nest ";
    if(n % 3 == 0) cout << "Academy ";
    if(n % 5 == 0) cout << "Bright ";
    if(n % 7 != 0) cout << "Future ";
    return 0;
}
```
