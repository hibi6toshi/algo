// #include <iostream>

// int main(){
//     int x, y;
//     std::cin >> x >> y;
    
//     int table[x+1][y+1];

//     for(int i=0; i<x; i++){
//         for(int j=0; j<y; j++){
//             int value;
//             std::cin >> value;
//             table[i][j] = value;
//             table[i][y] += value;
//             table[x][j] += value;
//         }
        
//         for(int l=0; l < y+1; l++){
//             std::cout << table[i][l] << " ";
//         }
//         std::cout << std::endl;
//     }
    
    
// }

#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;
    
    int table[x+1][y+1];
    
    // Initialize all elements to 0
    for(int i = 0; i <= x; i++) {
        for(int j = 0; j <= y; j++) {
            table[i][j] = 0;
        }
    }
    
    // Input values and calculate row and column sums
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            int value;
            std::cin >> value;
            table[i][j] = value;
            table[i][y] += value;  // Sum of column j
            table[x][j] += value;  // Sum of row i
            table[x][y] += value;  // Total sum
        }
    }
    
    // Output the table
    for(int i = 0; i < x+1; i++) {
        for(int j = 0; j < y+1; j++) {
            std::cout << table[i][j] << ' ';

        }
        std::cout << std::endl;
    }
    
    return 0;
}
