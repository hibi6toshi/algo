#include <iostream>
#include <string>
#include <cctype>

int main(){
    int ch_table[26] ={0};
    std::string ch;
    while ( std::cin >> ch ){
        for(int i = 0; i < ch.size(); i++){
            int index = tolower(ch[i]) - 'a';
            if(0 <= index and index < 26){
                ch_table[index] += 1;
            }
        }
    }
    for(int i=0; i<26; i++){
        char letter = 'a' + i;
        std::cout << letter << " : " << ch_table[i] << std::endl;
    }
}