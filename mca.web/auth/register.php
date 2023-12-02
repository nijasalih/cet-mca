<!DOCTYPE html>
<html>
<head>
    <title>Registration Page</title>
</head>
<body>
    <center>
        <h3>Registration Form</h3><hr><br>
        <form action="" method="post" > 
            <!-- onsubmit="return formValidate()"> -->
            Name : <input type="text" name="name" required><br><br>
            Age : <input type="number" name="age"required><br><br>
            Email ID : <input type="email" name="email" required><br><br>
            Enter Password : <input type="password" name="pass" id="pass" required><br><br>
            Confirm Password : <input type="password" id="cpass" required><br><br>
            <input type="submit" value="Register">&nbsp;&nbsp;
            <input type="reset" value="Clear">
        </form><br><br>
        <a href="login.php">Not a user?</a>
    </center>
    <?php
        if($_POST){
            if($_POST['pass']==$_POST['cpass']){
                $con = mysqli_connect('localhost','root','','student');
                if($con){
                    $name = $_POST['name'];
                    $age = $_POST['age'];
                    $email = $_POST['email'];
                    $password = md5($_POST['pass']);
                    
                    $sq="INSERT INTO account VALUES('$name','$age','$email','$password')";
                    $result = mysqli_query($con,$sq);
                    if($result){
                        echo"<script>
                        alert('Insertion Succesful!');
                        </script>";
                        header('Location:login.php');
                    }
                    else{
                        echo"<script>
                        alert('Insertion Failed!');
                        </script>";
                    }
                    
                }
            else{
                echo"DB Connection Failed!";
                }
            }
            else{
                echo"<script>
                alert(\"Password doesnt\'t match!\");
                </script>";
            }
        }
        
    ?>
</body>
<script src="main.js"></script>

</html>