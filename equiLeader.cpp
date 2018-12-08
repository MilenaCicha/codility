#include <iostream>
#include <vector>
#include <algorithm>
//A non-empty array A consisting of N integers is given.
//
//The leader of this array is the value that occurs in more than half of the elements of A.
//
//An equi leader is an index S such that 0 ≤ S < N − 1 and two sequences A[0], A[1], ..., A[S] and A[S + 1], A[S + 2], ..., A[N − 1] have leaders of the same value.
//
//For example, given array A such that:
//
//A[0] = 4
//A[1] = 3
//A[2] = 4
//A[3] = 4
//A[4] = 4
//A[5] = 2
//we can find two equi leaders:
//
//0, because sequences: (4) and (3, 4, 4, 4, 2) have the same leader, whose value is 4.
//2, because sequences: (4, 3, 4) and (4, 4, 2) have the same leader, whose value is 4.
//The goal is to count the number of equi leaders.
//
//Write a function:
//
//int solution(vector<int> &A);
//
//that, given a non-empty array A consisting of N integers, returns the number of equi leaders.
//
//For example, given:
//
//A[0] = 4
//A[1] = 3
//A[2] = 4
//A[3] = 4
//A[4] = 4
//A[5] = 2
//the function should return 2, as explained above.
//
//Write an efficient algorithm for the following assumptions:
//
//N is an integer within the range [1..100,000];
//each element of array A is an integer within the range [−1,000,000,000..1,000,000,000].

int solution(std::vector<int> &A){
    int amount{0};
    int equiL {0};

    for (int i : A) {
        if(amount == 0){
            equiL = i;
            ++amount;
        }else{
            if(i!=equiL)
                --amount;
            else
                ++amount;
        }
    }
    if(amount == 0){
        return 0;
    }
    unsigned total = 0;
    for(int i : A){
        if(i == equiL)
            ++total;
    }
    if(total<=(A.size()/2))
        return 0;

    int leaderCounter{0};
    unsigned rightSide{0};

    for(unsigned i = 0; i < A.size()-1; ++i){
        if(A[i] == equiL){
            ++rightSide;
            --total;
        }
        if(rightSide > (i+1)/2 && total > (A.size()-i-1)/2){
            ++leaderCounter;
        }
    }

    return leaderCounter;


}
int main(){
//    std::vector<int> A {4,3,4,4,4,2};
//    std::cout<<solution(A);


}

