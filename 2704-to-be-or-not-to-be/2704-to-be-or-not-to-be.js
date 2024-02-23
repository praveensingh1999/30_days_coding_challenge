/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe : function(c){
        if(c===val){
            return true;
        }
        else{
            throw new Error("Not Equal");
        }
    },
    
     notToBe : function(d){
        if(d!==val){
            return true;
        }
        else{
            throw new Error("Equal");
        }
     }
    }
    
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */