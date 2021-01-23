#include<iostream>
using namespace std;
class A{
    public:
        A(int x,int y){
            this->x=x;
            this->y=y;
            cout<<"constructor called"<<endl;
        }
        A(int x,int y,int z):x(x*z),y(y*z){
            cout<<"constructor called"<<endl;
        }
        
        int x,y;
        
    

};
int main ()
{
    A obj(1,2,3), obj2(1,2);
    cout<<obj.x<<obj.y<<obj2.x<<obj2.y<<endl;
    
    return 0;
}