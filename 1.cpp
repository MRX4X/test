#include <iostream>

using namespace std;

int main()
{
    int a , b, c;
    cout<<"Выберите и укажите цифру действия 1) + 2) - 3) * 4) /";
    cin>>a>>b>>c;
    if (a==1){
        cout<<b+c;
    }
    if (a==2){
        cout<<b-c;
    }
    if (a==3){
        cout<<b*c;
    }
    if (a==4){
        cout<<b/c;
    }
}

