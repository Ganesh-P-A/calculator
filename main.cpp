#include<iostream>
using namespace std;
int a,b;
float c;
char d;
int add(int a,int b){
    float c= a+b;
    return c;
}

int sub(int a,int b){
    float c=a-b;
    return c;
}

int mul(int a, int b){
    float c=a*b;
    return c;
}

int divi(int a,int b){
    float c=a/b;
    return c;
}

void decide(){
    int a;
    int b;
    char d;
    cout << "What Operation you Want to do " << endl;
    cout << "for addition press       'a' " << endl;
    cout << "for substraction press   's' " << endl;
    cout << "for multiplication press 'm' " << endl;
    cout << "for division press       'd' " << endl;
    cin >> d ;
    cout << "Enter first Number ";
    cin >> a;
    cout << "enter second Number ";
    cin >> b;
    if ( d == 'a'){
        cout<<"Addition of " <<a<< " and " << b << " is " <<add(a,b)<<endl;
        }
        else if (d == 's'){
            cout<<"Subtraction of " <<a<< " and " << b << " is " <<sub(a,b)<<endl;
            }
            else if (d == 'm'){
            cout<<"Multiplication of " <<a<< " and " << b << " is " <<mul (a,b)<<endl;
            }
            else {
                cout<<"Division of " <<a<< " and " << b << " is " <<divi(a,b)<<endl;
            }
        }
int main()
{
    for (int i = 0; i < 100; i++) {
      decide();
    }
    return 0;
}