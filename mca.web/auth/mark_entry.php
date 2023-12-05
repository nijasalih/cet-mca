<!DOCTYPE html>
<html>
<head>
    <title>Series Mark Entry</title>
</head>
<body>
    <center>
    <table >
        <caption><h1>Series Mark Entry</h1></caption>
        
        <tr>
            <td>KTU ID :</td>
            <td><input type="text" name="ktu_id"></td>
        </tr>
        <tr>
            <td>Subject :</td>
            <td>
                <select name="subject" >
                    <option value="0">--SELECT--</option>
                    <option value="maths">Maths</option>
                    <option value="ads">ADS</option>
                    <option value="ase">ASE</option>
                    <option value="dfca">DFCA</option>
                </select>
            </td>
        </tr>
        <tr>
            <td>Series 1 Score : </td>
            <td><input type="number" name="s1" ></td>
        </tr>
        <tr>
            <td>Series 2 Score : </td>
            <td><input type="number" name="s2" ></td>
        </tr>
        <tr>
            <td>Assignment 1: </td>
            <td><input type="number" name="a1" ></td>
        </tr>
        <tr>
            <td>Assignment 2 : </td>
            <td><input type="number" name="a2" ></td>
        </tr>
        <tr>
            <td>Attendance (%) : </td>
            <td><input type="number" name="atted" ></td>
        </tr>
    </table>
    <br><br>
   
    <input type="submit" name="mark_submit" value="Submit">
    <input type="reset" value="Clear">
    </center>
    
 
</body>
</html>