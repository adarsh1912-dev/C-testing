#include <bits/stdc++.h>
using namespace std;

int main(){

unordered_set<int> S;
S.insert(1);
S.insert(2);
S.insert(3);
S.insert(4);
S.insert(5);

int sum = 0;
for(auto i = S.begin(); i != S.end(); i++){

    sum+=*i;

}

cout << sum << endl;

    return 0;
}
