long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long int currentsum=0;
    long long int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        currentsum+= arr[i];

        if(currentsum <0){
            currentsum=0;
        }

        if(currentsum > maxsum){
            maxsum=currentsum;
        }
    }

    return maxsum;
}
