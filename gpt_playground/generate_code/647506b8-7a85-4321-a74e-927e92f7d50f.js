// This function generates a pseudorandom number between min (inclusive) and max (exclusive)
function getPseudoRandomNumber(min, max) {
    return Math.random() * (max - min) + min;
}

// Example usage
const randomNum = getPseudoRandomNumber(1, 100); // generates a random number between 1 and 100
console.log(randomNum);