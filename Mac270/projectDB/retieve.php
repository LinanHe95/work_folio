<html>
<head><title>Login Page</title></head>
    <body>
        <table border="1">
            <tr></tr>
        
        <?php
        $connection=mysqli_connect("localhost", "root","","project");
        if(!$connection){
            die("Datebase connection Failed" . mysqli_error($connection));
        }
        
        $result=mysqli_query($connection,"select * from survey where category ='student'");
            echo"<tr>";
            echo"<th>Last Name</th>";
            echo"<th>First Name</th>";
            echo"<th>Category</th>";
            echo"<th>First Mac270?</th>";
            echo"<th>Exhibits</th>";
            echo"<th>TDR</th>";
            echo"<th>Apple</th>";
            echo"<th>Avid</th>";
            echo"<th>Frestival</th>";
            echo"<th>Academic</th>";
            echo"<th>Papers</th>";
            echo"<th>Expections</th>";
        while($respondent=mysqli_fetch_array($result)){
            
            
        $firstname=$respondent['firstname'];
        $lastname=$respondent['lastname'];
        $category=$respondent['category'];
        $first=$respondent['first'];
        $exhibits=$respondent['exhibits'];
        $tdr=$respondent['tdr'];
        $apple=$respondent['apple'];
        $avid=$respondent['avid'];
        $festival=$respondent['festival'];
        $academic=$respondent['academic'];
        $papers=$respondent['papers'];
        $expections=$respondent['expections'];
        
        echo "<tr>";
            echo"<tr width='120'>< font size=2>$firstname</font></td>";
            echo"<tr width='120>< font size=2>$lastname</font></td>";
            echo"<tr width='120'>< font size=2>$catogory</font></td>";
            echo"<tr width='120>< font size=2>$first</font></td>";
            echo"<tr width='120'>< font size=2>$echibits</font></td>";
            echo"<tr width='120'>< font size=2>$tdr</font></td>";
            echo"<tr width='120'>< font size=2>$apple</font></td>";
            echo"<tr width='120'>< font size=2>$avid</font></td>";
            echo"<tr width='120'>< font size=2>$festival</font></td>";
            echo"<tr width='120'>< font size=2>$academic</font></td>";
            echo"<tr width='120'>< font size=2>$papers</font></td>";
            echo"<tr width='120'>< font size=2>$expections</font></td>";
        }
        
        ?>
        </table>
    </body>
    
</html>