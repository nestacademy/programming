#include <iostream>

using namespace std;

int main() { 

    int mahnii_une;
    mahnii_une = 7600;

    int number = 1;
    int daily_income = 0;

    while(number <= 20){

        int avah_hemjee;
        cin >> avah_hemjee;

        int tootsoo;
        tootsoo = mahnii_une * avah_hemjee;

        if (tootsoo >= 20000) {
            tootsoo = tootsoo / 10 * 8;
        } else {
            tootsoo = tootsoo / 10 * 9;
        }

        cout << tootsoo << endl;
        daily_income = daily_income + tootsoo;
        number = number + 1;
    }

    cout << daily_income << endl;
    
    return 0;
}


