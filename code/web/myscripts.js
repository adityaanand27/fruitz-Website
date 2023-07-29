let emp1 = {
    name: "Aditya",
    salary: 10000000,
}
let names = [1, 2, 3, 56, 78];
console.log(names);
console.log(names[2]);
console.log(emp1);
let temp = names.sort();
console.log(temp);

//Function 

function abc(a, b, c) {
    sum = a + b + c;
    console.log(sum);
}

console.log(abc(2, 3, 4));
//let temp1 = alert("You are Hacked");
//let temp2 = confirm("Do You still want to continue")
//  if (temp2) {
//   console.log("on the way");
//  }
//  else{
//    console.log("DENIED!");
//  }
//  let temp3 = prompt("Enter Your Name?","Guest")
// console.log(temp3);
//let name = document.getElementById('it');
//console.log(name);

let temp10 = document.getElementById('it');
console.log(temp10);
let sel = document.querySelector('#it')
console.log("Selector returned status_query_resolved", sel);
function mouseover1() {
    let btn = document.getElementById('btn');
    let para = document.getElementById('para');
    if (para.style.display != none) {
        para.style.display = 'none';
    }
    else {
        para.style.display = 'block';
    }
}
let get = document.getElementById('para');
get.addEventListener('mouseover',function run(){
    alert("Mouse Inside")
});