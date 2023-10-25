//
//  main.cpp
//  template
//
//  Created by Ashanti Tharp on 10/25/23.
//


#include <iostream>
using namespace std;

template <typename T>
T multiply(T a , T b){
    return a * b;
}
template <typename T>
T divide(T a , T b){
    return a / b;
}

int main(){
    
    int x = 10, y = 10;
    
    int sum1 = multiply(x,y);
    cout << "Sum of numbers is " << sum1 << endl;
    
    
    int answer = divide(x,y);
    
    cout << "Sum of numbers is " << answer << endl;
}
