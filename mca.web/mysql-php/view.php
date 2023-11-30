<?php
    include 'conn.php';

    $sq = "SELECT * FROM stud";
    $q = mysqli_query($con,$sq);
    if(mysqli_num_rows($q)){
        echo "<table>
        <tr>
            <th>Roll No</th>
            <th>Full Name</th>
            <th>Mark</th>
        </tr>
        ";
        while($rows=mysqli_fetch_assoc($q)){
            echo "
            <tr>
                <td>".$rows["roll_no"]."</td>
                <td>".$rows["name"]."</td>
                <td>".$rows["mark"]."</td>
            </tr>
            ";
        }
        echo "</table>";
    }
?>

