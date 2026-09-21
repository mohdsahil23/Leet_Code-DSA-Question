class Solution {
    public void reverseString(char[] s) {
        int n =s.length; 
        int st=0;
        int end=n-1;
        while(st<end){
         char temp = s[st];
        s[st] =s[end];
         s[end]= temp;
         st++;
         end--;

        }  
    }
}