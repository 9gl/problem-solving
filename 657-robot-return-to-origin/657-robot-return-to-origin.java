class Solution {
    public boolean judgeCircle(String moves) {
        int straight = 0, sideways = 0;
        for(int i = 0; i < moves.length(); i++){
            char move = moves.charAt(i);
            if(move == 'U'){
                straight++;
            }
            if(move == 'D'){
                straight--;
            }
            if(move == 'L'){
                sideways++;
            }
            if(move == 'R'){
                sideways--;
            }
        }
        return straight == 0 && sideways == 0 ;
    }
}