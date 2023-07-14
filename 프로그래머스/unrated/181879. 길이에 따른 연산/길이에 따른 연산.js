const sum = (arr) => {
    let val = 0;

    for (let i = 0; i < arr.length; i++)
        val += arr[i];
    return val;
}

const mul = (arr) => {
    let val = 1;

    for (let i = 0; i < arr.length; i++)
        val *= arr[i];
    return val;
}

function solution(num_list) {
    let rtnVal = 0;

    if (num_list.length < 11) rtnVal = mul(num_list);
    else rtnVal = sum(num_list);
    return rtnVal;
}