#include<iostream>
using namespace std;

//for counting digits in number
void digicount(int n) {
    int count = 0;

    while(n != 0) {
        int digit = n%10;
        count++;
        n = n/10;
    }

    cout << count << endl;
}

//function of sum of digits
void digisum(int n) {
    int sum = 0;

    while(n != 0) {
        int digit = n%10;
        sum = sum+digit;
    }

    cout << sum << endl;
}

//main function
int main() {
    int n = 35;
    digisum(n);
    return 0;
}