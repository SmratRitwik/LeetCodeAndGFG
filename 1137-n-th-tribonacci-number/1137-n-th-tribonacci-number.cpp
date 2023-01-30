int arr[38] ={0};
class Solution {
    void fill(){
        arr[0]=0, arr[1]=1, arr[2]=1;
        for(int i=3; i<=37; i++){
            arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]);
        }
    }
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        if(arr[n]==0)
            fill();
        return arr[n];
    }
};