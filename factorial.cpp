#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "Program for finding the factorial of a given number" << endl;

    cout << "Enter number : " ;

    int n; cin >> n;

    long long ans = 1;

    for(int i=1; i<=n; i++){
        ans*= i;
    }

    cout << "Factorial of " << n << " is : " << ans << endl;

return 0;
};
