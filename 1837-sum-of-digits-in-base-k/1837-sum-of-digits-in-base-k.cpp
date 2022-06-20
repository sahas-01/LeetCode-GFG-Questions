class Solution {
public:
    int sumBase(int n, int k) {
        int temp = n,convertednum=0,sum=0;
        while(temp!=0){
            int digit=temp%k;
            convertednum=convertednum*10+digit;
            temp/=k;
        }
        int temp2=convertednum;
        while(temp2!=0){
            int d=temp2%10;
            sum+=d;
            temp2/=10;
        }
        return sum;
    }
};