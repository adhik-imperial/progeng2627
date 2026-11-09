#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    int tmp;
    int sum=0;
    while(infile>>tmp){
        sum+=tmp;
    }
    std::cout<<sum;
}