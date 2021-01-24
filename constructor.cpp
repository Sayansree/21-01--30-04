#include<iostream>
using namespace std;
class A{
    public:
        A(int x,int y){                     //parameterised 
            this->x=x;
            this->y=y;
            cout<<"constructor called"<<endl;
        }

        A(int x,int y,int z):x(x*z),y(y*z){ //initialiser list
            cout<<"constructor called"<<endl;
        }

        A(){                                //default constructor 
        
        }
    
        int x,y;
        
    

};
int main ()
{
    A obj(1,2,3), obj2(1,2), obj1;
    cout<<obj.x<<'\t'<<obj.y<<endl;
    cout<<obj2.x<<'\t'<<obj2.y<<endl;
    cout<<obj1.x<<'\t'<<obj1.y<<endl;//garbage value
    return 0;
}