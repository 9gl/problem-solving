class Solution {
    public String reverseWords(String s) {
        String[] words = s.split(" ");
        StringBuilder sb = new StringBuilder();
        for(String word : words){
            String temp = "";
            for(int i = word.length() - 1; i >= 0; i--){
                temp+=word.charAt(i);
            }
            temp += " ";
            sb.append(temp);
        }
        return sb.toString().trim();
    }
}