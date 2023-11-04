#include<iostream>

using namespace std;

int main()
{
    //設定變數
    int min = 1;
    int max = 100;
    int input = -1;
    int answer = ;  //自己決定答案要是多少
    
    while(){        //請加上條件(答案!=猜的數字)
        
        //輸入
        cout<<"請輸入想猜的數字：";
        cin>>input;
        
        //邏輯判斷
        if(input>max||input<min){
            cout<<"不在範圍內"<<endl;
        }
        else if(input==answer){
            cout<<"恭喜答對！"<<endl;
        }
        else if(){          
            min = ;     //更改範圍
            cout<<"範圍："<<min<<"~"<<max<<endl;
        }
        
        else{
            max = ;     //更改範圍
            cout<<"範圍："<<min<<"~"<<max<<endl;
        }
        
    }
}
