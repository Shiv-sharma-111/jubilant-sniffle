// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){

    // Your code here
    int max_current , max_global;
    max_current =  max_global = arr[0];
    for(int i=1;i<n;i++)
    {
        max_current = max(arr[i],max_current+arr[i]);
        if(max_current > max_global)
        {
            max_global = max_current;
        }
    }
    return max_global;
}
