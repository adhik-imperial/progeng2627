#include <iostream>


double myabs(double in){
    double n;
    if(in<0){
        n=-in;
    }
    else{
        n=in;
    }
    return n;
}

int main(){
    double abs;
    std::cout<<"Please enter the number"<<std::endl;
    std::cin>>abs;
    std::cout<< "mod "<< abs <<" is "<< myabs(abs)<<std::endl;
}
