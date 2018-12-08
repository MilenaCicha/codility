#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
//Write a function
//
//int solution(vector<int> &A);
//
//that, given an array A consisting of N integers, returns the number of distinct values in array A.
//
//For example, given array A consisting of six elements such that:
//
//A[0] = 2    A[1] = 1    A[2] = 1
//A[3] = 2    A[4] = 3    A[5] = 1
//the function should return 3, because there are 3 distinct values appearing in array A, namely 1, 2 and 3.
//
//Write an efficient algorithm for the following assumptions:
//
//N is an integer within the range [0..100,000];
//each element of array A is an integer within the range [−1,000,000..1,000,000].

int solution(std::vector<int> &A){
    std::set<int> s;

    for(auto i : A){
        s.insert(i);
    }

    return s.size();
}

int main(){
    std::vector<int> A {2,1,1,1,3,1};
    std::cout<<solution(A)<<"\n";
    std::vector<int> B {};
    std::cout<<solution(B)<<"\n";
    std::vector<int> C {1};
    std::cout<<solution(C)<<"\n";
}
