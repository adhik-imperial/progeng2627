#include <iostream>

int factor(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
}   

int main(){
    int num;
    std::cout<<"Please enter the number you would like the smallest prime factor of"<<std::endl;
    std::cin>>num;
    std::cout<<factor(num);
}
