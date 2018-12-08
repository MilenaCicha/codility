#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

//A non-empty array A consisting of N integers is given. The consecutive elements of array A represent consecutive cars on a road.
//
//Array A contains only 0s and/or 1s:
//
//0 represents a car traveling east,
//1 represents a car traveling west.
//The goal is to count passingCars cars. We say that a pair of cars (P, Q), where 0 ≤ P < Q < N, is passingCars when P is traveling to the east and Q is traveling to the west.
//
//For example, consider array A such that:
//
//A[0] = 0
//A[1] = 1
//A[2] = 0
//A[3] = 1
//A[4] = 1
//We have five pairs of passingCars cars: (0, 1), (0, 3), (0, 4), (2, 3), (2, 4).
//
//Write a function:
//
//int solution(vector<int> &A);
//
//that, given a non-empty array A of N integers, returns the number of pairs of passingCars cars.
//
//The function should return −1 if the number of pairs of passingCars cars exceeds 1,000,000,000.
//
//For example, given:
//
//A[0] = 0
//A[1] = 1
//A[2] = 0
//A[3] = 1
//A[4] = 1
//the function should return 5, as explained above.
//
//Write an efficient algorithm for the following assumptions:
//
//N is an integer within the range [1..100,000];
//each element of array A is an integer that can have one of the following values: 0, 1.


int solution(std::vector<int> &A){
    int passingCars{0};
    int counter{0};

    for(auto i : A){
        if (i == 1) {
            passingCars += counter;
            if(passingCars > 1e9)
                return -1;
        }else
            ++counter;
    }
return passingCars;
}

int main(){
    std::vector<int> A {0,1,0,1,1};
    std::cout<<solution(A);
    std::vector<int> B {1,0};
    std::cout<<solution(B);
    std::vector<int> C {0,1};
    std::cout<<solution(C);
    std::vector<int> D {1,1};
    std::cout<<solution(D);
}