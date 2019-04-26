//
//  main.cpp
//  homework9
//
//  Created by Mac on 2019/3/29.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include <iostream>
using namespace std;
int main ()
{
    int i,j;
    for(i=1;i<10;i++) {
        for(j=1;j<10;j++)
            cout<<i<<"*"<<j<<"="<<i*j<<" ";
        cout<<endl; 
    }
    
    return 0;
}

