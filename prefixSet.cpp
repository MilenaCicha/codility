#include <iostream>
#include <vector>
#include <set>

//A non-empty array A consisting of N integers is given.
// The first covering prefix of array A is the smallest integer P such that 0≤P<N and such that every value that occurs in array A
// also occurs in sequence A[0], A[1], ..., A[P].
//
//For example, the first covering prefix of the following 5−element array A:
//
//A[0] = 2
//A[1] = 2
//A[2] = 1
//A[3] = 0
//A[4] = 1
//is 3, because sequence [ A[0], A[1], A[2], A[3] ] equal to [2, 2, 1, 0], contains all values that occur in array A.
//
//Write a function
//
//int solution(vector<int> &A);
//
//that, given a non-empty array A consisting of N integers, returns the first covering prefix of A.
//the function should return 3, as explained above.
//
//Write an efficient algorithm for the following assumptions:
//
//N is an integer within the range [1..1,000,000];
//each element of array A is an integer within the range [0..N−1].

int solution(std::vector<int> &A) {
   std::set<int> s;

   for(auto i : A){
       s.insert(i);
   }
    for (auto it = A.begin(); it != A.end(); ) {
        auto iter = s.find(*it);
        if(iter!=s.end()){
            s.erase(iter);
        }
        else {
            ++it;
        }
        if(s.empty())
            return std::distance(A.begin(),it);
    }


   return 0;
}

int main(){
    std::vector<int> A {2,2,1,0,1};
    std::cout<<solution(A);
}

