class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int low=0;
        int high=n-1;
        while(high-low>1){
            int mid=(high+low)/2;
            if(arr[mid]<k)
            low=mid+1;
            else
            high=mid;
        }
        if(arr[low]==k)
        return low;
        else if(arr[high]==k)
        return high;
        else
        return -1;
    }
};