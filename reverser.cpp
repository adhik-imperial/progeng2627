#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include<string>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    if(!infile.is_open()){
        std::cout<<"input file didnt open";
        return EXIT_FAILURE;
    }
    std::string tmp;
    std::vector<std::string> v;
    while(infile>>tmp){
        v.push_back(tmp);
    }
    std::vector<std::string> v2;
    for(int i=v.size()-1;i>=0 ; i--){
        v2.push_back(v.at(i));
    }
    infile.close();

    std::ofstream outfile;
    outfile.open("output.txt");
    if(!outfile.is_open()){
        std::cout<<"output file didnt open";
        return EXIT_FAILURE;
    }
    for(int j=0; j<v2.size(); j++){
        outfile<<v2.at(j);
    }
    outfile.close();
}