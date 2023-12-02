<!DOCTYPE html>
<html lang="en">
<head>
</head>
<body>
    <center>
        <h1>Student Registration Form</h1>
        <form action="" method="post">
            <table>
                <tr>
                    <td>Full Name :</td>
                    <td>
                        <input type="text" name="fname" required>
                    </td>
                </tr>
                <tr>
                    <td>KTU ID :</td>
                    <td>
                        <input type="text" name="ktu_id" required>
                    </td>
                </tr>
                <tr>
                    <td>Roll No :</td>
                    <td>
                        <input type="text" name="roll_no" required>
                    </td>
                </tr>
                <tr>
                    <td>Gender :</td>
                    <td>
                        <input type="radio" name="gender" value="Male" required> Male
                        <input type="radio" name="gender" value="Female"> Female
                        <input type="radio" name="gender" value="Other"> Other
                    </td>
                </tr>
                <tr>
                    <td>Semester</td>
                    <td>
                        <select name="semester">
                            <option value="0">--SELECT--</option>
                            <option value="1">Semester 1</option>
                            <option value="2">Semester 2</option>
                            <option value="3">Semester 3</option>
                            <option value="4">Semester 4</option>
                        </select>
                    </td>
                </tr>
                <tr>
                    <td>&nbsp;</td>  
                </tr>
                <tr>
                    <th><input type="submit"  name="submit" value="Register"></th>
                    <th><input type="reset" value="Clear"></th>
                </tr>
            </table>
        </form>
    </center>
    <?php
    if(isset($_POST["submit"])&&$_POST["semester"]!=0){
                $name = $_POST["fname"];
                $ktu_id = $_POST["ktu_id"];
                $roll_no = $_POST["roll_no"];
                $gender = $_POST["gender"];
                $semester = $_POST["semester"];
                echo $name."<br>".$ktu_id."<br>".$roll_no."<br>".$gender."<br>".$semester;

                $con = mysqli_connect('localhost','student','root','');
                if($con){
                    $sq = "INSERT INTO stude_reg VALUES('$name','$ktu_id',$roll_no,'$gender',$semester)";
                    $result = mysqli_query($con,$sq);
                    if($result){
                        echo"<script>
                        alert('Insertion Succesful!');
                        </script>";
                        header('Location:home.php');
                    }
                    else{
                        echo"<script>
                        alert('Insertion Failed!');
                        </script>";
                    }
                }
            else{
                echo "<script>alert(\"Please select the Semester!\");</script>";
            }   
    }
    ?>

</body>
</html>