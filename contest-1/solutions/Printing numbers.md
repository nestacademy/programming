# Printing numbers
Хэрэв _**N**_ тоо өгөгдсөн бол дараах байдалтай хэвлэж үзүүлнэ үү.

_**1**_</br>
_**22**_</br>
_**333**_</br>
_**...**_</br>
_**NNN...N**_</br>

# Бодолт 
## Solution 1.
### Straight-forwart implementation using nested-loop.

```
void solve(int n) {
    for(int  i = 1; i <= n; i++) {
        for(int j=0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
}
```
## Solution 2.
### Using small math trick(10^n-1=99..999) implementation.

```
void solve(int n) {
    for (int i = 1; i <= n; i++) {
        pow10 = pow(10, i);
        ones = (pow10 - 1) / 9;
        cout << ones * i << endl;
    }
}
```
## Solution 3.
### No loop solution.

```
void solve(int n) {
    if(n >= 1) { cout << 1 << endl; }
    if(n >= 2) { cout << 22 << endl; }
    if(n >= 3) { cout << 333 << endl; }
    if(n >= 4) { cout << 4444 << endl; }
    if(n >= 5) { cout << 55555 << endl; }
    if(n >= 6) { cout << 666666 << endl; }
    if(n >= 7) { cout << 7777777 << endl; }
    if(n >= 8) { cout << 88888888 << endl; }
    if(n >= 9) { cout << 999999999 << endl; }
}
```

## Solution 4.
### The lazy 1-loop solution (could use switch cases).

```
void solve(int n) {
	for(int i = 1; i <= n; i++) {
        if(i == 1) { cout << 1 << endl; }
        if(i == 2) { cout << 22 << endl; }
        if(i == 3) { cout << 333 << endl; }
        if(i == 4) { cout << 4444 << endl; }
        if(i == 5) { cout << 55555 << endl; }
        if(i == 6) { cout << 666666 << endl; }
        if(i == 7) { cout << 7777777 << endl; }
        if(i == 8) { cout << 88888888 << endl; }
        if(i == 9) { cout << 999999999 << endl; }
    }
}
```

## Solution 5.
### The real panic solution 😂😂😂😂.

```
void solve(int n) {
    if(n == 1) { cout << “1\n”; }
    if(n == 2) { cout << “1\n22\n”; }
    if(n == 3) { cout << “1\n22\n333\n”; }
    if(n == 4) { cout << “1\n22\n333\n4444\n”; }
    if(n == 5) { cout << “1\n22\n333\n4444\n55555\n”; }
    if(n == 6) { cout << “1\n22\n333\n4444\n55555\n666666\n”; }
    if(n == 7) { cout << “1\n22\n333\n4444\n55555\n666666\n7777777\n”; }
    if(n == 8) { cout << “1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n”; }
    if(n == 9) { cout << “1\n22\n333\n4444\n55555\n666666\n7777777\n88888888\n999999999\n”; }
}
```