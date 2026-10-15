class Solution {
    public boolean searchMatrix(int[][] a, int target) {
        int n = a.length, m = a[0].length;
        int st = 0;
        int end = n*m-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            int midEl = a[mid/m][mid%m];
            if(midEl == target) return true;
            if(target < midEl){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return false;
    }
}