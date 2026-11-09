#include <iostream>
#include<vector>
#include<fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    std::vector<int> v;
    int tmp;
    while(infile>>tmp){
        v.push_back(tmp);
    }

    for(int i=v.size()-1; i >= 0; i--){
        std::cout<< v.at(i);
    }
}

