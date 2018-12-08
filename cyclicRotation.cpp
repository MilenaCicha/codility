//Write a function:
//
//vector<int> solution(vector<int> &A, int K);
//
//that, given an array A consisting of N integers and an integer K, returns the array A rotated K times.
//
//For example, given
//
//A = [3, 8, 9, 7, 6]
//K = 3
//the function should return [9, 7, 6, 3, 8]. Three rotations were made:
//
//[3, 8, 9, 7, 6] -> [6, 3, 8, 9, 7]
//[6, 3, 8, 9, 7] -> [7, 6, 3, 8, 9]
//[7, 6, 3, 8, 9] -> [9, 7, 6, 3, 8]
//For another example, given
//
//        A = [0, 0, 0]
//K = 1
//the function should return [0, 0, 0]


#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int>& A, int K){
    if(A.empty() ){
        return A;
    }


    K = K % A.size();
    if(A.size() == 0 || A.size() == 1 || K == 0){
        return A;
    }

    else{
        std::rotate(A.begin(),A.end()-K,A.end());
        return A;
    }

}
int main(){
    std::vector<int> A {3, 8, 9, 7, 6};
    int K = 3;
    solution(A,K);
    for(auto& i : A){
        std::cout<<i<<" , ";
    }
}