

#include <iostream>
using namespace std;
//Task1
//N1!
int pow();
int sum();
int key();
int bin();
int nub();
//N2!
int sum(int first, int second)
{
    int overall = 0;
    for (int i = first; i <= second; ++i) {
        overall += i;
    }
    cout << overall;
    return overall;
}

int main()
{
    int answer;
     answer = pow(5, 3);
     cout << "answer: " << answer << "\n";
     
     sum(1,5);
     key(2);
     int result;
     result = bin(6);
     cout << "Result: " << result << "\n";
     nub(123321);
     
}
//N5
int nub(int numbs) {
    int result1 = 0;
    int result2 = 0;
    int numb;
    int temp = 6 / 2;
    for (int i = 0; i < 6; i++) {
        numb = numbs % 10;
        if (i < temp) {
            result1 += numb;
        }
        else if (i > temp) {
            result2 += numb;

        }
        if (result1 == result2) {
            cout << "number is lucky \n";
        }
        else {
            cout << "number isn't lucky";
        }
    }
}
//Task2 N1
int key(int kei)
{
    int ar[1][6] = {
        {2, 5, 7, 9, 10, 6 }
    };
    int result = 0;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 6; j++) {
            if (ar[i][j] == kei) {
                result = ar[i][j];

            }
            else if (ar[i][j] != kei) {
                cout << "Isnt result";
            }
        }
    }
}

int pow(int numb, int pow)
{
    int a = 1;
    int result = 0;
    for (int i = 0; i < pow; i++) {
       result = a *= pow;
       cout << result;
    }
    return a;
}
//N2
int bin(int numb) {
    int ar[1][7] = {
        {1, 6, 7, 8, 12, 5, 9 }
    };
    
    int first = ar[1][0];
    int last = ar[1][-1];
    int med = (first + last) / 2;
    if (med == numb) {
        cout << "IS OVER \n";
    }
    else if (med > numb) {
        first = med + 1;
    }
    else if (med < numb) {
        last = med - 1;
    }
}