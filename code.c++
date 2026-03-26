#include <iostream>
using namespace std;

int readnumber(int &x){
    cout << "enter number : ";
    cin >> x;
    return x;
}
void onetonumber(int x){
    for (int i = 1 ; i < x ; i++){
        cout << i << " ";
    }
}

int main(){
    int x;
    onetonumber(readnumber(x));
    
}