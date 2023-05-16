#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

float integ(float const x){
    float y,z;
    // y = 3/2;
    z = pow(x,3/2);
    return z;
}

int main(){
    float upper,lower, interval, h;
    cout<<"Enter Upper Limit: ";
    cin>>upper;
    cout<<"Enter Lower Limit: ";
    cin>>lower;
    cout<<"Enter Interval: ";
    cin>>interval;
    cout<<"===========================\n";
    h = (upper - lower)/interval;
    //  h/2[f(a) + f(b) + (2f(x1) + 2f(x2) +..........2f(n-1) )];
    float sum = integ(lower) + integ(upper);

    //use for loop
    for(int i=1; i<interval; i++){
        float k = lower + i*h;
        sum += 2*integ(k);
    }
    sum = sum * (h/2);
    cout<<"Final Answer is: "<<sum<<endl;
    return 0;
}