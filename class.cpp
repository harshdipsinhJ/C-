#include<iostream>
using namespace std;
class time
{
    private :
    int hour,minute,second;
    public :
    void settime (int h,int m,int s);
    void print();
};

void time ::settime(int h,int m,int s){
    hour=h;
    minute=m;
    second=s;
}

void time ::print(){
    cout<<"hours ="<<hour<<endl;
    cout<<"minute ="<<minute<<endl;
    cout<<"second ="<<second<<endl;
}

int main(){
    int h,m,s;
    time t1;
    cout<<"enter the hours";cin>>h;
    cout<<"enter the minute";cin>>m;
    cout<<"enter the second";cin>>s;

    t1.settime(h,m,s);
    t1.print();
    return 0;
}
