class Solution {
    public String getString(String s){
        s = s.toLowerCase();
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < s.length(); i++){
            char c = s.charAt(i);
            if(Character.isLetterOrDigit(c)){
                sb.append(c);
            }
        }
        return sb.toString();
    }
    public boolean isPalindrome(String s) {
        String str = getString(s);
        int sz = str.length();
        for(int i = 0; i < sz / 2; i++){
            if(str.charAt(i) != str.charAt(sz-1 - i)){
                return false;
            }
        }
        return true;
    }
}