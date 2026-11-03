#include <iostream>

void sortnum(double& x, double& y){
    double temp;
    if(x<y){
        double temp;
        temp=x;
        x=y;
        y=temp;
    }
    std::cout<<x<<y;
}

int main(){
    double n1;
    double n2;
    std::cout<<"Enter 2 numbers"<<std::endl;
    std::cin>>n1>>n2;
    sortnum(n1,n2);
}