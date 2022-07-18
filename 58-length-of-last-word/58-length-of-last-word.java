class Solution {
    public int lengthOfLastWord(String s) {
        String[] str = s.trim().split(" ");
        int sz = str.length;
        return str[sz-1].length();
    }
}