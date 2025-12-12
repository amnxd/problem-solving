let year = Number(prompt('Enter the year'));

let isLeap = false;

if(year%4==0){
  if(year%100==0){
    if(year%400==0) isLeap=true;
    else isLeap=false;
  }
  else isLeap=true;
}
else isLeap=false;

console.log(isLeap? "leap year" : "not a leap year");

//

//