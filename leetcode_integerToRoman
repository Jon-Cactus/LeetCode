var intToRoman = function(num) {
    let output = '';
    const roman = {
        1000 : "M",
        900 : "CM",
        500 : "D",
        400 : "CD",
        100 : "C",
        90 : "XC",
        50 : "L",
        40 : "XL",
        10 : "X",
        9 : "IX",
        5 : "V",
        4 : "IV",
        1 : "I",
    }
    
    for (let key of Object.keys(roman).map(Number).reverse()) {
        let value = roman[key]
        while (num >= key) {
            output += value;
            num -= key;
        }
     }  
    return output;
};