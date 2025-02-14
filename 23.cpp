#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class dmy {
    int day, mth, yr;
public:
    dmy() {
        day = mth = yr = 0;
    }
    dmy(int d, int m, int y) {
        day = d;
        mth = m;
        yr = y;
    }
    int getday() {
        return day;
    }
    int getmth() {
        return mth;
    }
    int getyr() {
        return yr;
    }
    void displaydata() {
        cout << day << "\t" << mth << "\t" << yr;
    }
};
class date {
private:
    char dt[20]; 
public:
    date() {
        dt[0] = '\0';
    }
    date(char* s) {
        strcpy(dt, s);
    }
    void displaydata() {
        cout << dt;
    }
    date(dmy t) {
        int d = t.getday();
        int m = t.getmth();
        int y = t.getyr();
        char temp[10]; 

        itoa(d, temp, 10);
        strcpy(dt, temp);
        strcat(dt, "\t");

        itoa(m, temp, 10);
        strcat(dt, temp);
        strcat(dt, "/");

        itoa(y, temp, 10);
        strcat(dt, temp);
    }
};
int main() {
    date d1;
    dmy d2(17, 11, 94);
    d1 = d2;

    cout << "d1=";
    d1.displaydata();
    cout << endl << "d2=";
    d2.displaydata();
    
    return 0;
}

