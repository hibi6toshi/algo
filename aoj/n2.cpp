#include <iostream>

int main(){
    int commands;
    std::cin >> commands;
    
    int count[4][3][10] = {};
    
    for(int i = 0; i < commands; i++){
        int b, f, r, v;
        std::cin >> b >> f >> r >> v;
        
        count[b-1][f-1][r-1] += v;
        std::cout << "vの値は: " << v << std::endl;
    }
    
    for(int b=0; b < 4; b++){
        for(int f=0; f<3; f++){
            for(int r=0; r<10; r++){
                std::cout << " " << count[b][f][r];
            }
            
            std::cout << std::endl;
        }
        if(b != 3){
            std::cout << "####################" << std::endl;
        }    
    }
}