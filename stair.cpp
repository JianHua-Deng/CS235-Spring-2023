#include <iostream>

int stair(int steps){
    if(steps < 0){
        return 0;
    }else if (steps == 0){
        return 1;
    }
    
    return stair(steps - 1) + stair(steps - 2) + stair(steps - 3);

}

int main(){
    std::cout << stair(5) << "\n";
    return 0;
}