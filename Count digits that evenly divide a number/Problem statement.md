# [Count Digits](https://www.naukri.com/code360/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM)
<p>
  <b>Problem statement</b>
</p>
<p>
  Find the number of digits of <code>n</code> that evenly divide <code>n</code>
</p>
<p>
  Note:<br>
  A digit evenly divides <code>n</code> if it leaves no remainder when dividing <code>n</code>
</p>
<p>
  <b>Example:</b>
</p>
<p>
  Input: ‘n’ = 336
</p>
<p>
  Output: 3
</p>
<p>
  Explanation:<br>
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.<br>
Note:<br>
You don’t need to print anything. Just implement the given function.
</p>

    Sample Input 1:
    35
    
    
    Sample Output 1:
    1
    
    
    Explanation of sample output 1:
    35 is only divisible by ‘5’, hence answer is 1.
    
    Sample Input 2:
    373
    
    
    Sample Output 2:
    0
    
    
    Explanation of sample output 2:
    There’s no digit in 373 that evenly divides it. Hence the output is 0.
    
    Expected Time Complexity:
    Try to solve this in O(log(n)) 
    
    
    Constraints:
    1 <= ‘n’ <= 10^9
    
    Time Limit: 1 sec
