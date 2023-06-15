
int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,max_sum=0,e=INT_MIN;
    for(int i=0;i<A.size();i++){
        e = max(e,A[i]);
        sum += A[i];
        max_sum = max(max_sum,sum);
        if(sum<0) sum=0;
    }
    if(e<0) return e;
    return max_sum;
}
