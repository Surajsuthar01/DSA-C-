#include<iostream>
using namespace std;

// class apnacollage{
//     public:
//     void func(){
//         cout<<"i am  function with no argument "<<endl;
//     }
//     void func(int x){
//         cout<<"i am function with int argument "<<endl;
//     }
//     void fun(double x){
//         cout<<"i am function with double argument "<<endl;
//     }
// };
// int main(){
//     apnacollage obj;
//     obj.func();
//     obj.func(6);
//     obj.func(4.5);
//     return 0;
// }



// class complex
// {
//     private:
//     int real,imag;
//     public:
//     complex(int r=0,int i=0){
//         real =r;
//         imag =i;
//     }
//     complex operator + (complex const &obj){
//         complex res;
//         res.imag = imag + obj.imag;
//         res.real = real + obj.real;
//         return res;
//     }
//     void display(){
//         cout<<real<<" + i"<<imag<<endl;
//     }
// };

// int main(){
//     complex c1(12,7);
//     complex c2(14,8);
//     complex c3 = c1 + c2;
//     c3.display();
//     return 0;

// }

class base{
 public:
  virtual void print(){
        cout<<"this is the base class print function"<<endl;
    }
    void display(){
        cout<<"this is the base class display function"<<endl;
    }
};
class derived :public base
{
     public:
    
   void print(){
        cout<<"this is the derived class print function"<<endl;
    }
    void display(){
        cout<<"this is the derrived class display function"<<endl;
    }
     
};

int main(){
    base *baseptr;
    derived obj;
    baseptr= &obj;
    baseptr -> print();
    baseptr -> display();
    return 0;
}