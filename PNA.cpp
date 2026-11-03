#include <iostream>

void pna(int l, int w, int&area, int&perimeter){
    area = l*w;
    perimeter = 2*l + 2*w;
}

int main(){
    int n1, n2, p, a;
    std::cout<<"enter the width and length of your rectangle"<<std::endl;
    std::cin>>n1>>n2;
    pna(n1,n2,p,a);
    std::cout<<p<<std::endl;
    std::cout<<a<<std::endl;
}