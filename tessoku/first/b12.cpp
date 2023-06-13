#include <bits/stdc++.h>
using namespace std;


double f(double x){
    return x * x * x + x;
}

int main(){
    int N;
    double left = 1;
    double right = 100;
    double mid;
    cin >> N;
    for(int i = 0; i < 20; i++){
        mid = (left + right)/2;
        double val = f(mid);

        if(val > 1.0 * N) right = mid;
        else left = mid;
    }

    cout << mid << endl;
} 