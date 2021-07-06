class Solution {
    fun findMissingAndRepeating(arr: Array<Int>, n: Int) : List<Int> {
        var ans = arrayListOf<Int>()
        for (i in 0 until n) {
            val pos: Int = Math.abs(arr[i]) - 1;
            if (arr[pos] > 0) {
                arr.set(pos, -arr[pos])
            } else {
                ans.add(pos + 1)
            }
        }
        for (i in 0 until n) {
            if (arr[i] > 0) {
                ans.add(i+1)
                break
            }
        }
        return ans
    }
}
