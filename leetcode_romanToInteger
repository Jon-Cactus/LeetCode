/**
 * @param {string} s
 * @return {number}
 */

var romanToInt = function(s) {
    let output = 0
    let previousVal = ''
    const roman = {
        I : 1,
        V : 5,
        X : 10,
        L : 50,
        C : 100,
        D : 500,
        M : 1000,
    }
    for (let i = 0; i < s.length; i++) {
        let currentVal = s[i]

        if (roman[currentVal] > roman[previousVal]) {
            output += roman[currentVal] - (roman[previousVal] * 2)
        }
        else {
            output += roman[currentVal]
        }
        previousVal = s[i]
    }
    return output
}   