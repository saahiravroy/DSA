#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> & v){

    int slow = v[0];
    int fast = v[0]; 
    do{

        slow = v[slow];
        fast = v[v[fast]];
    }

    while (slow = !fast);

    slow = v[0]; 
    while(slow != fast){

        slow = v[slow];
        fast = v[fast]; 
    }

    return slow; 
}
int main(){



}