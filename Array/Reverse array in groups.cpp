class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int l , h;
       for(int i = 0 ; i < n ; i = i + k)
       {   
           l = i;
           h = i + k-1;
           if(h>=n)
           {
               h = n-1;
           }
           while(l < h)
           {
               swap(arr[l] , arr[h]);
               l++;
               h--;
           } // code here
       }
       
    }
};