// #include <iostream>
// #include <cctype>

// int main(){
//     char ch;                     // １つの文字を格納するchar型の変数

//     while(1){
//         scanf("%c", &ch);        // 空白・改行を含めて１文字読み込む
//         if ( ch == '\n' ) break; // 読み込んだ文字が改行のとき終了する
        
//         if(isalpha(ch) and islower(ch)){ // 小文字なら大文字化する
//             ch = toupper(ch);
//         }else if (isalpha(ch) and isupper(ch)){ // 大文字なら小文字化する
//             ch = tolower(ch);
//         }
        
//         std::cout << ch;
//     }
//     std::cout << std::endl;
//     return 0;
// }

#include <iostream>
#include <cctype> // toupper, tolower を使用するために必要

int main() {
    char ch;

    while (1) {
        std::cin.get(ch); // １文字読み込む

        if (ch == '\n') // 読み込んだ文字が改行のとき終了する
            break;

        if (std::isalpha(ch)) { // 文字がアルファベットの場合
            if (std::islower(ch)) // 小文字なら大文字に変換
                ch = std::toupper(ch);
            else // 大文字なら小文字に変換
                ch = std::tolower(ch);
        }

        std::cout << ch;
    }

    std::cout << std::endl;
    return 0;
}