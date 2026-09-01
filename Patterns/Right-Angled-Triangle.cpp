#include<bits/stdc++.h>
using namespace std;
 // Function to print Pattern 1
void pattern1(int N){
  //Loop for rows
    for(int i=0; i<N; i++){
      // Loop for columns 
            for(int j =0; j<=i; j++){
                cout << "* ";
            }
      //move to next line after each row
            cout << endl;
        }
}
int main(){
  // Define N
    int N =5;
  // Call pattern function
    pattern(N);
    return 0;
}
