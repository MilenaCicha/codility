#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <bitset>

//Write a function:
//
//int solution(vector<int> &A);
//
//that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.
//
//For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
//
//Given A = [1, 2, 3], the function should return 4.
//
//Given A = [−1, −3], the function should return 1.

int solution(std::vector<int>& A){
    int num = 1;
    std::unordered_set<int> temp;
    for (int i : A) {
        temp.insert(i);
    }

    while(true){
        auto search = temp.find(num);
        if(search != temp.end())
            ++num;
        else
            return num;
    }
}
int main() {
    std::vector<int> A {1,3,6,4,1,2};
    std::cout<<"najmniejszy pozytywny integer: "<<solution(A)<<std::endl;
    std::vector<int> B {1,2,3};
    std::cout<<"najmniejszy pozytywny integer: "<<solution(B)<<std::endl;
    std::vector<int> C {-1,-3 };
    std::cout<<"najmniejszy pozytywny integer: "<<solution(C)<<std::endl;

}

