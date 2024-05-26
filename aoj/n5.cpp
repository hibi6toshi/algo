#include <iostream>
#include <string>

int main(){
    while(true){
        std::string str;
        int m;
        std::cin >> str;
        if (str == "-") break;
        std::cin >> m;
        
        for(int i=0; i<m; i++){
            int h;
            std::cin >> h;
            str = str.substr(h, str.size() - h) + str.substr(0, h);
        }
        std::cout << str << std::endl;
    }
    
}