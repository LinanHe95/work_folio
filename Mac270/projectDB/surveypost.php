<html>
<head><title>Login Page</title></head>
    <body>
        <?php
        $connection=mysqli_connect("localhost", "root","","project");
        if(!$connection){
            die("Datebase connection Failed" . mysqli_error($connection));
        }
        $firstname=mysqli_real_escape_string($connection, $_POST['firstname']);
        $lastname=mysqli_real_escape_string($connection, $_POST['lastname']);
        $category=mysqli_real_escape_string($connection, $_POST['category']);
        $first=mysqli_real_escape_string($connection, $_POST['first']);
        $exhibits=mysqli_real_escape_string($connection, $_POST['exhibits']);
        $tdr=mysqli_real_escape_string($connection, $_POST['tdr']);
        $apple=mysqli_real_escape_string($connection, $_POST['apple']);
        $avid=mysqli_real_escape_string($connection, $_POST['avid']);
        $frestival=mysqli_real_escape_string($connection, $_POST['frestival']);
        $academic=mysqli_real_escape_string($connection, $_POST['academic']);
        $papers=mysqli_real_escape_string($connection, $_POST['papers']);
        $expectations=mysqli_real_escape_string($connection, $_POST['expectations']);
        
        $sql="insert into survey (firstname,lastname, category, first, exhibits, tdr, apple, avid, frestival, academic, papers, expectations) values ('$firstname','$lastname','$category','$first','$exhibits','$tdr','$apple','$avid','$frestival','$academic','$papers','$expectations')";
        
        if(mysqli_query($connection,$sql)){
            echo"Data Addded";
        }else{
            echo"Information Not Entered: $sql." . mysqli_error($connection);
        }
        ?>
    </body>
</html>