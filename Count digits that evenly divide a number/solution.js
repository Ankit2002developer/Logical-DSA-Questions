//{ Driver Code Starts
//Initial Template for javascript


'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let N = parseInt(readLine());
        let obj = new Solution();
        let res = obj.evenlyDivides(N);
        console.log(res);
    }
}
// } Driver Code Ends



// } Driver Code Ends


//User function Template for javascript
    /**
     * @param {number} N
     * @returns {boolean}
    */

    class Solution {
        //Function to check whether the number evenly divides N.
        evenlyDivides(N)
        {
            //your code here
            let count = 0;
            let num = N;
            while(num != 0) {
                let digit = num % 10;
                if(digit != 0) {
                    if(N % digit == 0) {
                        count++;
                    }
                }
                num = Math.floor(num / 10);
            }
            return count;
        }
    }