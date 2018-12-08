#include <vector>
#include <iostream>

//skacz po tablicy zależnie od wartości w indeksie
//write a function int arrayJmp ( const vector<int> &A )that returns -1 if pawn will never get out of a table
//or returns number of moves if it will jump out of the array


int jump_array(const std::vector<int>& vector){
    int count{0};
    if(vector.size()!=1 && !vector.empty()){
        for(unsigned i = 0; i <vector.size();){
            if(vector[i]!= 0){
                i += vector[i];
//                ++count;  liczone z wyskoczeniem
        }else
            break;
        if(i >= vector.size()){
            return count;
        }
        ++count; //jesli ma zostac w tablicy


        }

    }

    return -1;
}

int main(){
    std::vector<int> A {1,3,2,1,1,1,1,1};
    std::cout<<jump_array(A)<<"\n";
    std::vector<int> B {1};
    std::cout<<jump_array(B)<<"\n";
    std::vector<int> C {};
    std::cout<<jump_array(C)<<"\n";
    std::vector<int> D {1,0,5};
    std::cout<<jump_array(D)<<"\n";
    std::vector<int> E {2,0,2,0,2,};
    std::cout<<jump_array(E)<<"\n";

}