#include <vector>
#include <iostream>
int solution(std::vector<int> &A) {


    int odd{0};
    for(int i : A){
        odd^=i;
    }
    return odd;
}

int main(){
    std::vector<int> A {9,3,9,3,9,7,9};
    std::cout<<solution(A);
}

