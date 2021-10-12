/*
    Author:Wang,YenHsiang/Yen,MingHung
    version : 1.0
    date : Oct/11
*/
#include "robot.hh"
//#include "robot.cc"
#include<iostream>
using namespace std;

extern vec_3d estlocation;

int main(){
    robot frank(2, 4, 9, 90);
    cout<<"frank location="<<frank;
    estlocation = frank.dist(TestBeacon);
    cout<<estlocatioin<<endl;
}

