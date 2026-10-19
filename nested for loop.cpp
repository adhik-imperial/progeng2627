#include <iostream>

int main(){
    int n;
    std::cout<<"Enter a number"<<std::endl ;
    std::cin>>n;
    for(int j=0;j<n;j++){
        std::cout<<std::endl;
        for(int i=0; i<n; i++){
        std::cout<<"*" ;
        }
    }
}