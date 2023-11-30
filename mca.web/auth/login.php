<!DOCTYPE html>
<html>
<head>
    <title>Login Page</title>
</head>
<body>
    <center>
        <h3>Login Form</h3><hr><br>
        <form action="" method="post">
            Email ID : <input type="email" name="email" required><br><br>
            Password : <input type="password" name="pass" required><br><br>
            <input type="submit" value="Login">&nbsp;&nbsp;
            <input type="reset" value="Clear">
        </form><br>
        <a href="register.php">Already a user?</a>
    </center>
    <?php
        if($_POST){
            $con = mysqli_connect('localhost','root','','student');
            if($con){
                $email=$_POST['email'];
                $password=md5($_POST['pass']);
                $sq="SELECT * FROM account WHERE email='$email' AND password='$password'";

                $result=mysqli_query($con,$sq);
                if(mysqli_num_rows($result)){
                    header("Location:home.php");
                }
            }
        }
    ?>
</body>
</html>