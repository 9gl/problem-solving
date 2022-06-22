class Solution {
    public List<Boolean> kidsWithCandies(int[] C, int EC) {
        ArrayList<Boolean> list = new ArrayList<>();
        int max = 0;
        for(int x : C ){
            if (x > max){
                max = x;
            }
        }
        for(int c : C){
            int total = c + EC;
            list.add(total >= max);
        }
        return list;
    }
}