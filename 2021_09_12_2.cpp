#include <iostream>
using namespace std;

int main(){
    
    int T, n;

    cin >> T;

    while (T--){
        cin >> n;
        for(int i = 0; n > 0 ; i++){
            if (n % 2 == 1){
                cout << i << " ";
            }
            n = n/2;
        }
    }
    return 0;
}