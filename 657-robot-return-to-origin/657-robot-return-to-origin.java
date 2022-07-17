class Solution {
    public boolean judgeCircle(String moves) {
        int straight = 0, sideways = 0;
        for(int i = 0; i < moves.length(); i++){
            char move = moves.charAt(i);
            switch(move){
                case 'U':
                    straight++;break;
                case 'D':
                    straight--;break;
                case 'L':
                    sideways++;break;
                case 'R':
                    sideways--;break;
            }
        }
        return straight == 0 && sideways == 0 ;
    }
}