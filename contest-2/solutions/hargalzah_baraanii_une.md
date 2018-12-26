# Харгалзах барааны үнэ
Танд дэлгүүрийн бараануудын нэр болон үнэ өгөгджээ. Тэгвэл дэлгүүрийн касс дээр уншсан барааны нэр өгөгдөхөд харгалзах үнийг хэвлэж гаргана уу.

|№| Нэр | Үнэ |
| - | - | - |
|1| uhriin_mah | 7600 |
|2| honinii_mah | 6400 |
|3| atar_talh | 1200 |
|4| suut_boortsog | 2500 |
|5| savhan_boortsog | 3000 |
|6| husliin_undaa | 1500 |
|7| bidnii_undaa | 2200 |
|8| oreo_jignemeg | 1200 |
|9| boodol_bohi | 900 |
|10| shirheg_bohi | 100 |
|11| arviin_chiher | 50 |
|12| venus_zairmag | 600 |

## Input
Касс дээр уншсан барааны нэр.

## Output
Харгалзах барааны үнийг хэвлэ. Хэрэв уншсан бараа жагсаалтанд байхгүй бол "baraa oldsongui." (хашилтгүйгээр) гэж хэвлэнэ үү.

## Solution
```
#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;
    if (name == "uhriin_mah") {
        cout << 7600 << endl;
        return 0;
    }
    if (name == "honinii_mah") {
        cout << 6400 << endl;
        return 0;
    }
    if (name == "atar_talh") {
        cout << 1200 << endl;
        return 0;
    }
    if (name == "suut_boortsog") {
        cout << 2500 << endl;
        return 0;
    }
    if (name == "savhan_boortsog") {
        cout << 3000 << endl;
        return 0;
    }
    if (name == "husliin_undaa") {
        cout << 1500 << endl;
        return 0;
    }
    if (name == "bidnii_undaa") {
        cout << 2200 << endl;
        return 0;
    }
    if (name == "oreo_jignemeg") {
        cout << 1200 << endl;
        return 0;
    }
    if (name == "boodol_bohi") {
        cout << 900 << endl;
        return 0;
    }
    if (name == "shirheg_bohi") {
        cout << 100 << endl;
        return 0;
    }
    if (name == "arviin_chiher") {
        cout << 50 << endl;
        return 0;
    }
    if (name == "venus_zairmag") {
        cout << 600 << endl;
        return 0;
    }
    cout << "baraa oldsongui." << endl;
    return 0;
}
```