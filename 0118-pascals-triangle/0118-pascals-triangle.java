class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        for (int i = 0; i < numRows; i++) {
            List<Integer> temp = new ArrayList<>();
            for (int x = 0; x <= i; x++) {
                temp.add(1);
            }
            if (i >= 2) {
                int k = 1;
                for (int j = 0; j < ans.get(i - 1).size() - 1; j++) {
                    temp.set(k,
                    ans.get(i - 1).get(j) +
                    ans.get(i - 1).get(j + 1));
                    k++;
                }
            }
            ans.add(temp);

        }
        return ans;
    }
}