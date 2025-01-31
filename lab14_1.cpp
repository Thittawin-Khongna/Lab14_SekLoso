#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
 for (int i =1; i<N ;i++){
  T current = d[i];
  for(int j = i-1; j>= 0 ; j--){
   if (d[j] < current){
    d[j+1] = d[j];
    d[j] = current;
   }
  }
  cout << "Pass " << i << ":";
  for(int i = 0; i < 10; i++) cout << d[i] << " ";
  cout << "\n";
 }

}