/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    const temp = init;
    const obj = {
        reset: function(){
            init = temp;
            return temp;
        },
        increment: function(){
            init= init+1;
            return init;
        },
        decrement: function(){
            init = init-1;
            return init;
        }
    } 
    return obj;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */