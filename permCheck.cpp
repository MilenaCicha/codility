#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

//A non-empty array A consisting of N integers is given.
//
//A permutation is a sequence containing each element from 1 to N once, and only once.
//
//For example, array A such that:
//
//    A[0] = 4
//    A[1] = 1
//    A[2] = 3
//    A[3] = 2
//is a permutation, but array A such that:
//
//    A[0] = 4
//    A[1] = 1
//    A[2] = 3
//is not a permutation, because value 2 is missing.
//Write a function:
//
//int solution(vector<int> &A);
//
//that, given an array A, returns 1 if array A is a permutation and 0 if it is not.
//Write an efficient algorithm for the following assumptions:
//
//N is an integer within the range [1..100,000];
//each element of array A is an integer within the range [1..1,000,000,000].

int solution(std::vector<int> &A) {
    int check = 1;
    std::set<int> s;
    for(auto i : A){
        if(s.find(i)==s.end()){
            s.insert(i);
        }else
            return false;
        check = std::max(check,i);
    }

    return (check==s.size());

}
int main(){
    std::vector<int> A {4,1,3,2};
    std::vector<int> B {4,1,3};
    std::cout<<solution(A)<<"\n";
    std::cout<<solution(B)<<"\n";
}
