#include <iostream>
#include <string>

int main(){
    int n1;
    std::cout<< "Please enter the year"<< std::endl;
    std::cin>>n1;
    if(n1%4==0){
        if(n1%100 != 0){
            std::cout<< "This year is a leap year"<<std::endl;
        }
        else{
            if(n1%100==0, n1%400==0){
                std::cout<< "This year is a leap year"<<std::endl;
            }
            else{
                std::cout<<"This year is not a leap year"<<std::endl;
            }
        }
    }
    else{
        std::cout<<"this year is not a leap year"<<std::endl;
    }
}
