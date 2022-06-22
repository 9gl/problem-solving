class Solution {
    public boolean checkIfPangram(String sentence) {
        int sz = sentence.length();
        if(sz < 26){
            return false;
        }
        for(char c = 'a' ; c <= 'z'; c++){
            if (sentence.indexOf(c) == -1){
                return false;
            }
        }
        return true;
    }
}