#include <iostream>
#include <vector>
//A non-empty array A consisting of N integers is given. Array A represents numbers on a tape.
//
//Any integer P, such that 0 < P < N, splits this tape into two non-empty parts: A[0], A[1], ..., A[P − 1] and A[P], A[P + 1], ..., A[N − 1].
//
//The difference between the two parts is the value of: |(A[0] + A[1] + ... + A[P − 1]) − (A[P] + A[P + 1] + ... + A[N − 1])|
//
//In other words, it is the absolute difference between the sum of the first part and the sum of the second part.
//Write a function:
//
//int solution(vector<int> &A);
//
//that, given a non-empty array A of N integers, returns the minimal difference that can be achieved.
//
//For example, given:
//
//A[0] = 3
//A[1] = 1
//A[2] = 2
//A[3] = 4
//A[4] = 3
//the function should return 1, as explained above.
//
//Write an efficient algorithm for the following assumptions:
//
//N is an integer within the range [2..100,000];
//each element of array A is an integer within the range [−1,000..1,000].

int solution(std::vector<int> &A){
    int leftSide{0};
    int rightSide{0};
    int total{0};
    int eq{0};
    int temp{0};
    for (int i : A) {
        total+= i;
    }

    for(int i = 0; i < A.size()-1; ++i){
        leftSide+=A[i];
        rightSide =(total - leftSide);
        eq = std::abs(rightSide-leftSide);
       if (!(i)){
            temp = eq;
        } else{
            if (eq <= temp)
                temp = eq;
        }
    }

    return temp;

}
int main(){
    std::vector<int> A {3,1,2,4,3};
    std::cout<<solution(A);
}

