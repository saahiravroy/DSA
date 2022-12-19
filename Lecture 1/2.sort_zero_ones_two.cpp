#include<bits/stdc++.h>
using namespace std;

int sort(vector<int> &v, int n){

    int low = 0, mid = 0, high = n - 1; 
    while(mid<=high){

        if(v[mid]==0){

            swap(v[low++], v[mid++]); 
        }

        else if(v[mid]==1){

            mid++; 
        }

        else if(v[mid]==2){

            swap(v[mid], v[high--]); 
        }
    }
}
int main(){


}