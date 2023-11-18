#include<iostream>

using namespace std;

int main()
{
    int min = 1;
    int max = 100;
    int input = -1;
    int answer = ;  //自己決定
    int count=0;
    cout<<"範圍：1~100"<<endl;
    for(){          //限定只能猜五次
        count++;
        cout<<"請輸入想猜的數字：";
        cin>>input;
        if(input>max||input<min){
            cout<<"不在範圍內"<<endl;
        }
        else if(){
            min = ;
            cout<<"範圍："<<min<<"~"<<max<<endl;
        }
        else if(){
            cout<<"恭喜答對！"<<endl;
            break;
        }
        else{
            max=;
            cout<<"範圍："<<min<<"~"<<max<<endl;
        }
    }
    if(count>=5){
        cout<<"很遺憾次數用盡了"<<endl;
    }
        
}
