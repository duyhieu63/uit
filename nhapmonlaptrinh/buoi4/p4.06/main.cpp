#include <bits/stdc++.h>

using namespace std;
vector <int> uoca;
int input()
{
    int a;
    cin >> a;
    return a;
}
void input(int &b)
{
    cin >> b;
}
void uoc(int a){
    for(int i = 1; i <= sqrt(a); i++){
        if(a % i == 0){
            uoca.push_back(i); // ước thứ 1
            if(i != a / i){
                uoca.push_back(a / i); // ước tương ứng
            }
        }
    }
}
int gdc(int a,int b)
{
    int biggest=0;
    uoc(a);
    for(int i = 1; i <= sqrt(b); i++){
        if(b % i == 0){
                auto it=find(uoca.begin(),uoca.end(),i);
            if(it!=uoca.end())
            biggest=max(biggest,i); // ước thứ 1
            it= find(uoca.begin(),uoca.end(),b/i);
            if(i != b / i && it!=uoca.end()){
                biggest=max(biggest, b / i); // ước tương ứng
            }
        }
    }
    return biggest;
}
int main(){
    int a, b;
    a=input();
    input(b);
    std::cout << gdc(a, b);
    return 0;
}
