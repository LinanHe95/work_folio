<html>
    <head>
    <title>MySQL upload sample</title>
    </head>
    <body>
    <?php
      //  if(isset($_FILES(['file']['name']))){
            $name=$_FILES['file']['name'];
            $temp_name=$_FILES['file']['temp_name'];
            $sumbit=isset($_POST['sumbit']);
            $position=strpos($name,".");
            $fileextension=substr($name,$position+1);
            $fileextension=strtolower($fileextension);
            $description=$_POST['description entered'];
        
        if(isset($name)){
            $path='uploads/';
        
        if(!empty($name)){
            if(move_uploaded_file($temp_name,$path,$name))
                echo'uploaded';
            }
        }
        
        $link=mysqli_connect("localhost","root","","project");
        if(!$connection){
            die("Datebase connection Failed" . mysqli_error($connection));
        }
        if(!empty($description)){
            mysqli_query($connection,"insert into file(file_name,description) values('$description','$name') ");
        }
        ?>
    </body>