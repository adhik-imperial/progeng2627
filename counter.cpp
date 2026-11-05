#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    int count=0;
    std::vector<int> store;
    for(int i=0;i<v.size();i++){
        if(v.at(i)==5){
            count++;
            store.push_back(i);
        }
    }
    std::cout<<"5 occurs "<< count <<" times in the list";
    for(int j=0;j<store.size();j++){
        int temp=store.at(j);
        std::cout<<" It occurs at index "<< temp;
    }

        
}