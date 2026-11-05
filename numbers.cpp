#include <iostream>
#include<vector>

int main(){
    std::vector<int> v;
    int n;
    std::cout<<"Please enter the number of elements in your list"<<std::endl;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        std::cout<<"Enter the element of your list"<<std::endl;
        std::cin>>tmp;
        v.push_back(tmp);
    }
    int threshold;
    std::cout<<"Enter your threshold value"<<std::endl;
    std::cin>>threshold;
    for(int j=0;j<=v.size();j++){
        if (v.at(j)<threshold){
            std::cout<< v.at(j)<<std::endl;
        }
        else{
            continue;
        }
    }
}
