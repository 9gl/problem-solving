class Solution {
    public int maxRepeating(String seq, String word) {
        int count = 0;
        int sz = seq.length() / word.length();
        String s = "";
        for(int i = 0; i < sz; i++){
            s += word;
            if(seq.contains(s)){
                count++;
            }
        }
        return count;
    }
}