document.addEventListener('keypress', function(event) {
    var key = event.key;

    if(key >= 0 && key <= 9) {
        var number = parseInt(key);

        if(number % 2 === 0) {
            console.log("The number is divisible by 2: ", number);
        } else if(number % 3 === 0) {
            console.log("The number is divisible by 3: ", number);
        } else {
            console.log("The number is not divisible by 2 and 3: ", number);
        }
    }
});