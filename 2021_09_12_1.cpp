#include <iostream>
using namespace std;

int main(){
    
    int n, k;
    int num[10000] = {0};
    
    cin >> n;
    cin >> k;
    
    int j = 1;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            num[j] = i;
            j++;
        }
    }
    cout << num[k] << endl;

    return 0;
}