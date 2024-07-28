#include<iostream>
using namespace std;
int main(){
    int n,s;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Enter the number" << endl;
    cin >> s;
    switch(s){

        case 1 :cout<<"the values is= "<< n+10 <<endl;
        break;

        case 2 :cout<<"the values is= "<< n+20 <<endl;
        break;

        case 3:cout<<"the values is= "<< n+30 <<endl;
        break;

        default :cout<<"give the value"<<endl;
        break;
    }
    return 0;

}
