let addon = require('../build/Release/addon');

//Show the number of attached displays
function display (){
    try {
        let result = addon.enumMonitor();
        return result
    } catch (error) {
        console.log(error);
    }
}

//Displays to sleep
function sleep (){
    try {
        addon.reqSleep();
        return true
    } catch (error) {
        console.log(error);
    }
};

//Displays to wake
function wake (){
    try {
        addon.reqAwake();
        return true    
    } catch (error) {
        console.log(error);
    }
};

//Returns the last input time
function lastInputTime (){
    try {
        let result = addon.lastInputTime();
        return result
    } catch (error) {
        console.log(error);
    }
}

//Show the number of attached displays
console.log("1. Number of attached displays: " + display());

//Displays to sleep
console.log("2. Request the displays to sleep: " + sleep());

//Displays to wake
console.log("3. Request the displays to wake: " + wake());

//Returns the last input time
console.log("4. Last Input Time: " + lastInputTime() + " seconds");

//export all the functions
module.exports = {
    display, 
    sleep, 
    wake,
    lastInputTime
}