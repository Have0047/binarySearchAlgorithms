let array = [...Array(100000000).keys()];//change it to what number you want
let target = 9187291;//change it to what number you want

let index =  binarySearch(array,target)//the number

if(index == -1){
    console.log(`${target} not found`);
}
else{
    console.log(`Element found at: ${index}`);
}

function binarySearch(array,target){
   let low = 0
   let high = array.length - 1
   let count = 0;
    while(low <= high){

        let middle = Math.floor( low + (high - low) / 2)
        let value = array[middle]
        console.log(`${count}: ${value}`)
        if(value < target){ low = middle + 1}
        else if (value > target){ high = middle -1}
        else { return middle}
        count++;   
    }
    return -1

}
module.exports = binarySearch
