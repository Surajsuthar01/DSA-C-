#include<iostream>
using namespace std;
class student{
    string name;
    public:
   // string name;
    int age;
    bool gender;

    student(){
        cout<<"default constructor"<<endl;
       //default constructor
    }
    
    student(string s,int a,int b){
          //parameterised constructor
          cout<<"parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = 1;
    }  
    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~student(){
        cout<<"destructor called"<<endl;

    }


      void setname(string s){
        name =s;
    }

    void getname(){
        cout<<name<<endl;
    }
    

    void printinfo(){
        cout<<"name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;

        }
        bool operator ==(student &a){
            if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
        }
    };
    int main(){
        // student arr[3];
        // for(int i=0;i<3;i++){
        //     string s;
        //     cout<<"name = ";
        //     cin>>s;
        //     arr[i].setname(s);
        //     cout<<"age = ";
        //     cin>>arr[i].age;
        //     cout<<"gender = ";
        //     cin>>arr[i].gender;

        // }
        // for(int i=0;i<3;i++){
        //     arr[i].printinfo();
        // }

        student a("suraj", 20,1);
       // a.printinfo();
        student b("gopal",21,0);
        student c =a;
        if(b==a){
            cout<<"same"<<endl;   
        }
        else{
            cout<<"not same"<<endl;
        }
        return 0;
    }
