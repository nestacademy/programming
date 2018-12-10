#include <iostream>

using namespace std;

int main() { 

    int mahnii_une;
    mahnii_une = 7600;

    int number = 1;
    int daily_income = 0;
    int tootsoo[21];

    while(number <= 20){

        int avah_hemjee;
        cin >> avah_hemjee;

        tootsoo[number] = mahnii_une * avah_hemjee;

        if (tootsoo[number] >= 20000) {
            tootsoo[number] = tootsoo[number] / 10 * 8;
        } else {
            tootsoo[number] = tootsoo[number] / 10 * 9;
        }

        cout << tootsoo[number] << endl;
        daily_income = daily_income + tootsoo[number];
        number = number + 1;
    }
    
    int lucky;
    cin >> lucky;

    cout << tootsoo[lucky] << endl;
    
    daily_income = daily_income - tootsoo[lucky];

    cout << daily_income << endl;
    
    return 0;
}


