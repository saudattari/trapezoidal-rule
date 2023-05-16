#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//defining function for integ

float inte(float const a){
    float y;
    y = sqrt(a);
    return y;
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
    /*formula:
                h/2[f(a) + f(b) + (2f(x1) + 2f(x2) +..........2f(n-1) )];
                step1: float sum = f(a) + f(b)
                step2: find x1;
                step3: step1 + 2*fm(x1)
                step4: REPEAT STEP 2 AND 3 FOR 1 TO n-1
                step5: sum = (h/2) * sum;

                These five steps will help you to find you desired ouput easily lets start;
    */
        //  Aplly Step1
        float sum = inte(upper) + inte(lower);
        // Apply Step2
        for(int i = 1 ; i<= interval-1 ; i++ ){
            float k = lower + i*h;
             sum = sum + 2*inte(k);
             //Repeat above steps
        }
        sum = sum * (h/2);
        cout<<"Final Answer of questions: "<<sum<<endl;

}