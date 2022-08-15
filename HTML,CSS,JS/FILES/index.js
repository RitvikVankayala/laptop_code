// alert('HELLO WORLD');
//-->FOR GIVING THE ALERT POP UP
// console.log('HELLO WORLD');
//-->FOR PRINTING IN THE CONSOLE
// console.warn('THIS IS AN ERROR');
//-->FOR MENTIONING AN ERROR IN THE CONSOLE
// console.error('warning');
//-->FOR GIVING THE ERROR IN THE CONSOLE
//variables like var and const and let
//var is almost not used because it is globally scoped
//so we use mainly let and const
// let re;
// re=79;
// re=90;
// console.log(re);
// this is usage of let
// const re;
// re=90;
// console.log(re);
// throws an error the re should be defined at const line only
// const re=90
// console.log(re)
// cons cannot be reassigned
//using the semicolon at the end is our choose but it is better to use as it increase the readability

//data types in the js-->numbers,string,boolean,null and undefined and symbols
// const names='Ritvik';
// const age=17;
// const isgood=true;
// const rating=4.99;
// const x=null;
// const y=undefined;
//undefined is nothing but the (let y)
// console.log(typeof names);->string
// console.log(typeof age);-->number
// console.log(typeof isgood);-->boolean
//  console.log(typeof rating);-->number
// console.log(typeof x);-->object
// console.log(typeof y);-->undefined
// typeof function is used in the console.log for finding what kind of the datatype it is
// const names='Ritvik';
// const age=18;
// console.log('MY NAME IS '+names+ 'AND MY AGE IS' + age); concolation
// const names='Ritvik';
// const age=18;
// const hello=`MY NAME IS ${names} AND MY AGE IS ${age}.`
// console.log(hello);-->template string
 //const s='HELLO WORLD"
// console.log(s.length);
//for the length of string
// console.log(s.toUpperCase());
//touppercase is used for making the string to the upper case
// console.log(s.toLowerCase());
//for making the string in the lower case
// console.log(s.substring(1,8).toUpperCase());
//substring is used to slice the string from 1 to 8 here the string charecters are stored in array of starting index
// const names='RITVIK PHANI'
// console.log(names.split(''));
//splits wherever there is space
// const s='APPLE, ORANGE, GOOD'
// console.log(s.split(', '))
//splits whenever there is ,and space
// const r=new Array(1,2,3,4,5);
//for defining an array of name r
// console.log(r);
//printing the all elements of the array
// const fruits=new Array('apple','orange','grapes')
// console.log(fruits)
// fruits[3]='mango';
//frits.push('kiwi)-->automatic pushing to lasts
//even though the array is constant we can add the elements to it
// console.log(fruits[2])
//element of array fruits at index 2
// console.log(fruits)
// fruits.push('kiwi')
//pushing the kiwi at the last
// console.log(fruits)
// fruits.pop();
//for poping the last element
// console.log(fruits)
// fruits.unshift('marbles')
//for pushing the element in the first of the array
// console.log(fruits)
// console.log(Array.isArray(fruits));
//for knowing whether an variable is array or not
// console.log(Array.isArray('hello'));
// console.log(fruits.indexOf('marbles'))
//for finding the index of the elemnt in the array
//below are the object literals that help for holding multiple objects
// const person={
//     firstname:'Ritvik',//we should compulsary use comma here
//     lastname:'Vankayala',
//     age:18,
//     hobbies:['Coding','Reading','Exploring'],
//     address:{
//         street:'Ram street',
//         city:'Amalapuram',
//         country:'India',
//     }
// }
// console.log(person)
// console.log(person.age)
// console.log(person.hobbies[1])
// console.log(person.address.country)
// const {firstname,lastname,address:{street,city}}=person
//in the above way we can set a datatype of type person
// console.log(firstname)
// console.log(city)
// person.gmail='Person@gmail.com'
// console.log(person)
//the gmail will also add now
// const todos=[
//     {
//         id:1,
//         text:'Take Out Of Trash',
//         iscompleted:true,
//     },
//     {
//         id:2,
//         text:'Meeting The Boss',
//         iscompleted:false,
//     },
//     {
//         id:3,
//         text:'Elon Appointment',
//         iscompleted:true,
//     }
// ]
// for storing the objects in an arrays
// console.log(todos)
// console.log(todos[1].text)
// const todosJson=JSON.stringify(todos)
// console.log(todosJson)-->for converting into json
// for(let i=0;i<10;i++){
//     console.log(i);
// }
//for loop making
// let j=0
// while(j<11){
//     console.log(`THE VALUE OF THE J IS ${j}`)
//     j++;
// }
//while loop making
// const todos=[
//     {
//         id:1,
//         text:'dhoni',
//         iscompleted:true
//     },
//     {
//         id:2,
//         text:'kohli',
//         iscompleted:false,
//     }
// ]
// for(let todo of todos){
//     console.log(todo)
//     console.log(todo.text)
    //it tells that print all elements of todos on variable todo
//}
// for(let i=0;i<todos.length;i++){
//     console.log(todos[i].text)
// }-->one way of getting array of the objects
// higher order array implementation
//foreach,map,filter-->higher order array functions
// const todos=[
//     {
//         id:1,
//         text:'Take Out Of Trash',
//         iscompleted:true,
//     },
//     {
//         id:2,
//         text:'Meeting The Boss',
//         iscompleted:false,
//     },
//     {
//         id:3,
//         text:'Elon Appointment',
//         iscompleted:true,
//     }
// ]
//for each
// todos.forEach(function (todo) {
//     console.log(todo.text)
// })
//for the maps
// const todotext=todos.map(function(todo){
//     return todo.text
//     //all the return values will now form an array
// })
// console.log(todotext)
//for the filtes
// const todocomplete=todos.filter(function(todo){
//     return todo.iscompleted===true
// })
// console.log(todocomplete)
//for the filters with maps
// const todotext=todos.filter(function(todo){
//     return todo.iscompleted===true
// }).map(function(todo){
//     return todo.text
// })
// console.log(todotext)
//it prints the todos list whose iscompleted is true there's text
// const x='10'
// if(x==10){
//     console.log('x is 10')
// }//double equals to donnot match the datatype 

// if(x===10){
//     console.log('x is 10')
// }//triple equals matches the datatype also
// const x=0
// if(x===10){
//     console.log('x is 10')    
//      }
//      else if (x===20){
//          console.log('x is 20')
//      }
//      else{
//          console.log('x is neither 10 nor 20')
//      }
// && for the and 
// || for the or
//>= for greater than or equals
// !=not equals
//usage of the ternary operators
// const x=20
// const colour=x>10 ? 'blue':'red'
//if const x is greater than 10 then blue else red
// console.log(colour)
// switch(colour){
//     case'blue':
//     console.log('THE COLOUR IS BLUE')
//     break
//     case'red':
//     console.log('THE COLOUR IS RED')
//     break
//     default:
//         console.log('THE COLOUR IS NEITHER RED NOR BLUE')
//         break
// }
//above one is the switch case statement in the javascipt 
// function addnumber(num1,num2){
//     return num1+num2
// }
// console.log(addnumber(5,4))
// function addnumbers(num1=3,num2=6){
//     return num1+num2
//}
// console.log(addnumbers(5,6))//only the value over here have high priority
//usage of arrow operator for the functions
//const addnumber=(n1,n2)=>n1+n2
// const addnumber=(n1,n2)=>{
// return n1+n2
// }
// console.log(addnumber(4,5))
//for making a constructor function we should start with capital letter
//constructor function
// function Person(firstname,lastname,dob){
//     this.firstname=firstname;
//     this.lastname=lastname;
//     this.dob=new Date(dob);
// //     this.getbirthyear=function(){
// //         return this.dob.getFullYear();
// //     }
// //     this.getfullname=()=>{
// //         return `${this.firstname} ${this.lastname}`;
// //     }
// }
// Person.prototype.getbirthyear=()=>{
//     return this.dob.getFullYear();
// }
//it is way we ise to define a function in another function as a prototype
// Person.prototype.getfullname=function(){
//     return `${this.firstname} ${this.lastname}`
// }
//intantiate an object
//   const person1=new Person('RITVIK','VANKAYALA',"2004-10-02")
//  console.log(person1)
// const person2=new Person('PHANI','VANKAYALA','2004-10-04');
// console.log(person2.lastname)
// console.log(person1.dob)
// console.log(person1.dob.getFullYear())
// console.log(person1.getbirthyear())
// console.log(person1.getfullname())
// console.log(person1.getbirthyear())
//usage of the classes
// class Person{
//     constructor(firstname,lastname,dob){
//     this.firstname=firstname;
//     this.lastname=lastname;
//     this.dob=new Date(dob);
//     }
//     getbirthyear=function(){
//       return this.dob.getFullYear();
//  }
//  getfullname=function(){
//          return `${this.firstname} ${this.lastname}`
//      }
// }
// const person1=new Person('RITVIK','VANKAYALA',"2004-10-02")
// console.log(person1.getbirthyear())
//DOM IN THE JAVASCRIPT
//single element and multiple elements in dom
//SINGLE ELEMENT SELECTOR
// console.log(window)
// window.alert('will you submit')
// console.log(document.getElementById('email'))
// console.log(document.querySelector('.container'))
// console.log(document.querySelector('#name'))
//MULTIPLE ELEMENT SELECTOR
// console.log(document.querySelectorAll('.items'))
// console.log(document.getElementsByClassName('items'))
// console.log(document.getElementsByTagName('li'))
// const items=document.querySelectorAll('.items')
//  items.forEach((item)=>console.log(item))
// const ul=document.querySelector('.items')
// ul.remove();
// ul.firstElementChild.remove()
// ul.firstElementChild.textContent='REPLACED'
// ul.children[1].innerText='hello'
// ul.lastElementChild.innerHTML='<h2>HELLO</h2>'
// const btn=document.querySelector('.btn')
// btn.style.background='blue'
// const btn=document.querySelector('.btn')
// btn.addEventListener('click',(e)=>{
//     e.preventDefault()
//      console.log(e)
//     console.log(e.target)
//     // console.log(e.target.class)
//     // document.querySelector('#myform').style.background='#ccc'
//     // // document.querySelector('body').classList.add('aa')
//     document.querySelector('.items').lastElementChild.innerHTML=('<h2>HELLO</h2>')
//     console.log('click')
// })
//instead of click we can also use mousehover and moveout
// const myform=document.querySelector('#myform')
// const names=document.querySelector('#name')
// const email=document.querySelector('#email')
// const msg=document.querySelector('.msg')
// const submit=document.querySelector('.btn')
// const userlist=document.querySelector('#user')

// myform.addEventListener('submit',onsubmit);
// function onsubmit(e){
//     e.preventDefault();
//     // console.log(names.value);
//     if(names.value==="" || email.value===""){
//         // alert('please enter the field')
//         msg.innerHTML='PLEASE ENTER THE FIELD'
//         msg.classList.add('error')
//         setTimeout(()=>msg.remove(),3000)
//     }
//     else{
//         const li=document.createElement('li')
//         li.appendChild(document.createTextNode(`${names.value} : ${email.value}`))
//         userlist.appendChild(li)
//         //clear the feilds
//         names.value=''
//         email.value=''
//     }
// }