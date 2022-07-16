#include<iostream>
#include<random>
using namespace std;
int main(){
    default_random_engine e;//生成随机无符号数
    for(size_t i=0;i<10;i++){
        //e() 调用对象来生成下一个随机数
        cout<<e()<<endl;
    }
}