#include <iostream>
void InsertSort(int A[],int n);
int main() {
    int A[6] = {0,4,3,1,6,2};
    InsertSort(A,5);
    for (const auto &item: A)
        std::cout << item << std::endl;
    return 0;
}
void InsertSort(int A[],int n){
    int i,j;
    for (i = 2; i <= n; ++i) {
        if(A[i] < A[i - 1]){
            A[0] = A[i];
            for (j = i - 1;A[0] < A[j] ; --j) {
                A[j + 1] = A[j];
            }
            A[j + 1] = A[0];
        }
    }
}