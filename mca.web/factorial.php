<!DOCTYPE html>
<html>
<head>
    <title>Factorial Found!</title>
</head>
<body>
<?php
    $fact=1;

    for($i=$_POST["num"];$i>0;$i--)
    {
        $fact*=$i;
    }
    echo "<h3> Factorial of entered number is $fact</h3>";
?>
</body>
</html>