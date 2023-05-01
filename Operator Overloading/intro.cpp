#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r=0,int i=0){
        real = r;
        img = i;
    }
    // Complex add (Complex x){
    //     Complex temp;
    //     temp.real = real + x.real;
    //     temp.img = img + x.img;
    //     return temp;
    // }
    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

};
int main(){
    Complex C1(3,7);
    Complex C2(5,4);
    Complex C3;
    // C3 = C1.add(C2);          // C1 calls function add by giving C2 argument
    // OR C3 = C2.add(C1);

    // using operator +
    // C3 = C1.operator+(C2);
    C3 = C1 + C2;

}