#include<iostream>
using namespace std;

double gcd(double,double);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

double gcd(double a ,double b)
{
    if(a%b == 0) return b;
    else return gcd(b,a%b);
}