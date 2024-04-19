#include <iostream>
using namespace std;

int cal_X(int num){
    int num_tmp=num;
    int sum=0;int digit;
    while(num_tmp){
        digit=num_tmp%10;
        sum+=digit*digit*digit;
        num_tmp/=10;
    }
    return sum;
}

int main()
{
    int min,max;
    bool flag=false;
    cin>>min>>max;
    for(int n=min;n<max;n++){
        if(n==cal_X(n)){
            flag=true;
            cout<<n<<' ';
        }
    }
    if(!flag){cout<<"no";}
    return 0;
}


