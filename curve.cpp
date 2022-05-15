#include"curve.h"
#include<iostream>
// #include<string>
using namespace std;
curve::curve(){
    for(int i=0;i<a;i++) 
        {
            point[i]=0;
        }
    
}
 ostream&operator<<(ostream&out,const curve&c){
     out<<c.point;
     return out;

}
// int*curve::getpoint(){
//      return point;
// }

