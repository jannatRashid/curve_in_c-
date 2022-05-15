//  B20102055 JANNAT RASHID 
#include"curve.h"
// #include"parametriccurve.h"
#include<iostream>
using namespace std;
int main(){
    cout<<"       "<<"first test case"<<endl;
    cout<<"the points entered should be in range:"<<endl;
    cout<<"   "<<"-3<=t<=2"<<endl;
    cout<<"2 parametric eqations are "<<endl;

    cout<<"   "<<"x=t-1"<<endl;
    cout<<"   "<<"y=2t+4"<<endl;


   


   parametriccurve para;
   para.computepoints();  


//    cout<<"out of loop"<<endl;
//    cout<<parametriccurve[0]<<endl;
   
   
    return 0;


}
