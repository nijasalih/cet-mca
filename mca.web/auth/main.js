function formValidate(){
    pass=document.getElementById("pass").innerHTML.value;
    cpass=document.getElementById("cpass").innerHTML.value;

    if(cpass != pass){
        alert("Password doesn't match!");
    }
}