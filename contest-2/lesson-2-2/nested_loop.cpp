#include <iostream>

using namespace std;


int main() { 

    int mahnii_une, num, day, weekly_income, daily_income, avah_hemjee;
    int tootsoo[21];
    
    
    mahnii_une = 7600;
    day = 1;
    weekly_income = 0;
    
    cout << "\t\tNest Academy 2018 - Programming Lesson" << endl << endl;
    while(day < 8){    
        cout << "-------------------------------------------------------------------------------------\n";
        cout << "\t\tӨнөөдөр " << day << "дэхь өдөр бид бүхэн махны дэлгүүрээ нээж байна" << endl; 
        cout << "\t\tХонины мах 1 кг нь == " << mahnii_une << " төг \n\n";
        daily_income = 0;
        num = 1;
        while (num <= 5){

            string greetings;
            greetings = "\t\tСайн байна уу үйлчлүүлэгч-" + to_string(num) + " та хэдэн кг мах авах вэ :)";
            cout << greetings << endl << "\t\t";
            
            cin >> avah_hemjee;

            tootsoo[num] = mahnii_une * avah_hemjee;

            if (tootsoo[num] >= 20000){
                cout << "\t\tТаны тооцоо 20000төг-өөс их болсон учир бид 20%-ийн хямдрал өглөө \n";
                cout << "\t\t" << tootsoo[num] << "төг - ";
                cout << tootsoo[num] / 10 * 2 << "төг = ";
                tootsoo[num] = tootsoo[num] / 10 * 8;
                cout << tootsoo[num] << "төг боллоо\n";
            }else{
                cout << "\t\tТаны тооцоо 20000төг-өөс бага болсон учир бид 10%-ийн хямдрал өглөө \n";
                cout << "\t\t" << tootsoo[num] << "төг - ";
                cout << tootsoo[num] / 10 << "төг = ";
                tootsoo[num] = tootsoo[num] / 10 * 9;
                cout << tootsoo[num] << "төг боллоо\n";
            }
            
            cout << "\t\tТаны тооцоо : " << tootsoo[num] << " төг " << endl << endl;
            
            daily_income = daily_income + tootsoo[num];
            
            num = num + 1;
        }    
        
        
        day = day + 1;
        cout << "\t\tДэлгүүр хааж эзний захиасын дагуу азтай үйлчлүүлэгчээ сонгоё\n";
        cout << "\t\tАзтай үйлчлүүлэгчийн дугаарыг хэлнэ үү (1-5) : ";
        int lucky;
        cin >> lucky;
        cout << "\n\t\tүйлчлүүлэгч-" << lucky << "-д " << tootsoo[lucky] << "төг-ийг бэлэг болгон явууллаа\n";
        cout << "*********************************************************************************\n";
        daily_income = daily_income - tootsoo[lucky];
        weekly_income = weekly_income + daily_income;
    }
    
    cout << "\n\n\t\tЭнэ 7 хоногын худалдан авалт дууслаа \n\t\tНийт орлого : " << weekly_income << " төг" << endl;
    
    return 0;
}


