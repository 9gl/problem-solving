class Solution {
    public boolean halvesAreAlike(String s) {
        String vowels = "aeiouAEIOU";
        int mid = s.length() / 2;
        int count = 0;
        for(int i = 0, j = mid; i < mid && j < 2*mid; i++,j++){
            if(vowels.indexOf(s.charAt(i)) >= 0) count++;
            if(vowels.indexOf(s.charAt(j)) >= 0) count--;
        }
        return count == 0;
    }
}