#include<bits/stdc++.h>
using namespace std; 

pair<int,int> repeat_and_missing(vector<int> & v, int n){

    int Repeat, Missing; 
    //Repeat - Missing = (sumtill 1 to n  - sum )
    //Repeat2 - Missing2 = (sumtill 1 to n2 - sum )
    //Repeat + Missing = ()/(1)
    int sum1 = 0, sum2=0, sum3=0, sum4=0;
    for (int i = 0;i<n;i++){

        sum2+=v[i]; 

    }
    sum1 = (n * (n + 1)) / 2;
    sum3 = (n * (n + 1) * (2 * n + 1)) / 6; 


    for (int i = 0; i < n;i++){

        sum4 += v[i] * v[i]; 
    }

    Repeat = (sum1-sum2 + (sum3-sum4)/(sum1-sum2)) / 2;
    Missing = ((sum3-sum4)/(sum1-sum2) - (sum1 -sum2) ) /2;

    return {Repeat, Missing}; 
}

int main(){


}