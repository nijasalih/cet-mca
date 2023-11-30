<?php
    include 'conn.php';
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Search Student</title>
</head>
<body>
    <center>
        <form action="" method="post">
            Enter Student Roll No : <input type="text" name="r_no"><br><br>
            <input type="submit" value="Search">
        </form><br><hr>
        <?php
                if($_POST){
                    $r_no=$_POST["r_no"];
                    $sq = "SELECT * FROM stud WHERE roll_no = $r_no";
                    $q = mysqli_query($con,$sq);
                    if(mysqli_num_rows($q)){
                        // echo "<table border='1'>
                        // <tr>
                        //     <th>Roll No</th>
                        //     <th>Full Name</th>
                        //     <th>Mark</th>
                        // </tr>
                        // ";
                        while($rows=mysqli_fetch_assoc($q)){
                            // echo "
                            // <tr>
                            //     <td>".$rows["roll_no"]."</td>
                            //     <td>".$rows["name"]."</td>
                            //     <td>".$rows["mark"]."</td>
                            // </tr>
                            // ";
                            echo "
                            Roll No :<input type='number' value='".$rows["roll_no"]."' disabled>&nbsp;
                            Name :<input type='text' name='name1' value='".$rows["name"]."'>&nbsp;
                            Mark :<input type='number' name='mark1' value=".$rows["mark"].">&nbsp;  
                            <input type='button' value='Update'>
                            ";
                        }
                        echo "</table>";
                }else{
                    echo"No Student found with Roll No : ".$r_no;
                }
            }
        ?>
    </center>
    
    
</body>
</html>