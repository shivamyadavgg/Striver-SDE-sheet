class Solution {
    private fun reverseArr(nums: IntArray, st: Int, en: Int) : Unit {
        var sz: Int = (en-st)/2
        for (i in 0 until sz) {
            nums[st+i] = nums[en-i-1].also { nums[en-i-1] = nums[st+i] }
        }
    }
    
    fun nextPermutation(nums: IntArray): Unit {
        var ind: Int = -1
        val n : Int = nums.size
        for (i in (n-2) downTo 0) {
            // find last occurence of increasing pair
            if (nums[i] < nums[i+1]) {
                ind = i
                break
            }
        }
        if (ind != -1) {
            var ind2: Int = ind
            for (i in ind+1 until n) {
                // closest greater element in array
                if (nums[i] > nums[ind] && (ind == ind2 || nums[i] <= nums[ind2])) {
                    ind2 = i;
                }
            }
            // swap elements at ind and ind2
            nums[ind] = nums[ind2].also { nums[ind2] = nums[ind] }
        }
        // nums.reverse(ind+1, nums.size) // available after version 1.4
        // println("$nums, $ind")
        reverseArr(nums, ind+1, nums.size)
    }
}
