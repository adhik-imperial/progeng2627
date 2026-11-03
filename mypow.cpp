#include <iostream>

int mypow(int x,int n){
    int tot=0;
    int term=1;
    for(int i=0;i<=n-1;i++){
        term*=x;
        tot= tot + term;
    }
    return tot;
    }

int main(){
    int base,pow;
    std::cout<<"Please enter your base"<<std::endl;
    std::cin>>base;
    std::cout<<"please enter your power"<<std::endl;
    std::cin>>pow;
    std::cout<<"Your summation is "<< mypow(base,pow)<<std::endl;
}
