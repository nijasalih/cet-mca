
<?php
    include 'conn.php'; 
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
</head>
<body>
    <center>
        <form action="" method="post">
            Roll No : <input type="number" name="r_no"><br>
            Full Name : <input type="text" name="name"><br>
            Mark : <input type="text" name="mark"><br>
            <input type="reset" value="Clear">
            <input type="submit">
        </form>
    </center>
    <?php
        if($_POST){
            $r_no = $_POST['r_no'];
            $name = $_POST['name'];
            $mark = $_POST['mark'];

            $sq = "INSERT INTO stud VALUES('$r_no','$name','$mark')";
            $p = mysqli_query($con,$sq);
            if($p){
                echo "<script>
                alert('1 row insertion successful!');
                </script>";
            }
            else{
                echo"<script>
                alert('Insertion Failed!');
                </script>";
            }
        }    
    ?>
</body>
</html>