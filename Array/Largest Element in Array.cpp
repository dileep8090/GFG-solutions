
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
     int res=arr[0];
       for(int i=1;i<n;i++){
           if(res<arr[i]){
               res = arr[i];
           }
       }
       return res;   
    }
};
