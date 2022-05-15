#include"curve.h"
// #include"parametriccurve.h"
#include<iostream>
using namespace std;
parametriccurve::parametriccurve(){
    mint=0;
    maxt=0;

}

 ostream&operator<<(ostream&out,const parametriccurve&p){
     out<<p.mint;
     out<<p.maxt;
     return out;
   


}


  
void parametriccurve::computepoints(){
//   parametric equations (1st test case)
//     X=t-1;
//     y=2*t+4;
  int  t[6];
  cout<<"enter points (t) for parametric equations"<<endl;
  for (int i=0;i<6;i++){
      cout<<"values at position"<<i<<":";
      cin>>t[i];

  }
   cout << "\n points 0n parametric curve at X coordinate are  :\n";
   for (int i = 0; i <6; i++) {
      // Accessing sales value using for loop
      cout << "Position : " << i << " ,  X= " << t[i]-1 << " \n";
   }
   cout << "\n points on parametric curve at Y coordinate are :\n";
   for (int i = 0; i <6; i++) {
      // Accessing sales value using for loop
      cout << "Position : " << i << " ,  Y= " << 2*t[i]+4 << " \n";
   }

    cout<<"       "<<"second test case"<<endl;
     
     cout<<"the points entered should be in range:"<<endl;
    cout<<"   "<<"-2<=t<=2"<<endl;
    cout<<"2 parametric eqations are "<<endl;

    cout<<"   "<<"x=t+6"<<endl;
    cout<<"   "<<"y=3t-1"<<endl;
  //   parametric equations (2nd  test case)
  //     X=t+6;
  //     y=3*t-1;
      int  T[5];
  cout<<"enter points (t) for second parametric equations"<<endl;
  for (int i=0;i<5;i++){
      cout<<"values at position"<<i<<":";
      cin>>T[i];

  }
   cout << "\n points 0n parametric curve at X coordinate are  :\n";
   for (int i = 0; i <5; i++) {
      // Accessing sales value using for loop
      cout << "Position : " << i << " ,  X= " << T[i]+1 << " \n";
   }
   cout << "\n points on parametric curve at Y coordinate are :\n";
   for (int i = 0; i <5; i++) {
      // Accessing sales value using for loop
      cout << "Position : " << i << " ,  Y= " << 3*T[i]-1 << " \n";
   }

   
}