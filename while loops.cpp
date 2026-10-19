#include <iostream>

int main(){
    bool zerocheck = false;
    int sum=0;
    while(zerocheck == false){
        int n;
        std::cout<<"enter a number"<<std::endl;
        std::cin >> n;
        sum+=n;
        std::cout<<"The running total is "<< sum <<std::endl ;
        if(n!= 0){
            zerocheck = false;
        }
        else{
            zerocheck = true;
        }
    }
}