class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int rsz = image.length;
        int csz = image[0].length;
        int[][] arr = new int[rsz][csz];
        for(int i = 0; i < rsz; i++){
            for(int j = 0; j < csz; j++){
                arr[i][j] = image[i][csz-1-j];
                if(arr[i][j] == 0){
                    arr[i][j] = 1;
                }else{
                    arr[i][j] = 0;
                }
            }
        }
        return arr;
    }
}